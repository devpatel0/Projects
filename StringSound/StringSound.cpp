  // Copyright [2022] <Dev Patel>
#include "StringSound.h"
#include <vector>
StringSound::StringSound(double frequency) {
    _time = 0;
    _cb = std::unique_ptr<CircularBuffer>(new CircularBuffer(static_cast<size_t>(ceil(SAMPLES_PER_SEC / frequency))));
    // calculating the size of the CircularBuffer.
}

// cppcheck-suppress uninitMemberVar
StringSound::StringSound(std::vector<sf::Int16> init) {
    _time = 0;
    _cb = std::unique_ptr<CircularBuffer>(new CircularBuffer(static_cast<size_t>(init.size())));

    for (unsigned i = 0; i < init.size(); i++) {
      _cb->enqueue(init[i]);
    }
}

void StringSound::pluck() {
    // _cb->isEmpty();

    while (!(_cb->isEmpty())) {
      _cb->dequeue();
    }
    while (!(_cb->isFull())) {
      _cb->enqueue((sf::Int16)(rand() & 0xffff));  // NOLINT
    }
}

void StringSound::tic() {
  int16_t f = _cb->dequeue();
  int16_t l = _cb->peek();

  _cb->enqueue(0.5*0.996*(f+l));
  _time++;
}

int16_t StringSound::sample() {
  return _cb->peek();
}

int StringSound::time() {
  return _time;
}


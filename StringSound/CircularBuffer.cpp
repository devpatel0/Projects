// Copyright [2022] <Dev Patel>
#include "CircularBuffer.h"

CircularBuffer::CircularBuffer(size_t capacity) {  // takes in cap size to set the vector to
  ringB.reserve(capacity);  // only way to give vector capacity we want
  size1 = 0;
  capacity1 = capacity;
  if (capacity < 1) {
     throw
     std::invalid_argument("CircularBufferconstructor: capacity must be greater than zero.");
     // capacity cannot be less than 1
  }
}

size_t CircularBuffer::size() {
    return size1;  // return number of items in buffer
}

bool CircularBuffer::isEmpty() {
  if (size1 > 0) {  // if the size is greater than zero the buffer is not empty
    return false;
  } else {
    return true;  // if the size is not greater than zero the buffer is empty
  }
}

bool CircularBuffer::isFull() {
  if (size1 < capacity1) {  // if the size of the buffer is less than the capacity the buffer is not full
     return false;
  } else {
     return true;  // if the size of the buffer is equal to or greater than the capacity the buffer is full
  }
}

void CircularBuffer::enqueue(int16_t x) {  // takes in item
  if (isFull()) {
    throw std::runtime_error("enqueue: can't enqueue to a full ring.");  // cannot add item to buffer if it is full
  }
  ringB.push_back(x);  // push back add x to the end of the buffer
  size1++;  // increase size by 1
}

int16_t CircularBuffer::dequeue() {
  if (isEmpty()) {
    throw
    std::runtime_error("dequeue: can't dequeue to an empty ring.");
    // cannot remove item if there is no item(buffer is empty)
  }
  int16_t temp = ringB.front();  // hold the front value for later return
  ringB.erase(ringB.begin());  // erase that front value
  size1--;  // decrease size by 1
  return temp;  // return that front value
}

int16_t CircularBuffer::peek() {
  if (isEmpty()) {
    throw
    std::runtime_error("peek: cant peek to an empty ring.");
    // cannot return item if there is no item(buffer is empty) to return
  }
  return ringB.front();  // return front value
}

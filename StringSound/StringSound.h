  // Copyright [2022] <Dev Patel>
/**
 * @file StringSound.h
 * @author Dev Patel
 * @brief 
 * @version 0.1
 * @date 2022-03-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef SOUND  // NOLINT
#define SOUND
#include "CircularBuffer.h"

#include <stdint.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <memory>
#include <stdexcept>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#define CONCERT_A 220.0
#define SAMPLES_PER_SEC 44100
const double FACTOR = 0.996;

#endif    // NOLINT

class StringSound {
 public:
explicit StringSound(double frequency);
explicit StringSound(std::vector<sf::Int16> init);
StringSound(const StringSound &obj) = delete;  // no copy const
void pluck();
void tic();
sf::Int16 sample();
int time();
 private:
std::unique_ptr<CircularBuffer> _cb;
int _time;
};

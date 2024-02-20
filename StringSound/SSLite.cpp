// Copyright [2022] <Dev Patel
/**
 * @file SSLite.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <limits.h>

#include "CircularBuffer.h"
#include "StringSound.h"

#include <cmath>
#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>


#define CONCERT_A 220.0
#define SAMPLES_PER_SEC 44100
// const double FACTOR = 0.996;
const std::string KEY = "q2we4r5ty7u8i9op-[=zxdcfvgbnjmk,.;/' ";  // NOLINT

std::vector<sf::Int16> makeSamples(StringSound& gs) {  // NOLINT
    std::vector<sf::Int16> samples;

    gs.pluck();
    int duration = 8;  // seconds
    int i;
    for (i= 0; i < SAMPLES_PER_SEC * duration; i++) {
        gs.tic();
        samples.push_back(gs.sample());
    }

    return samples;
}

int main() {
    sf::RenderWindow window(sf::VideoMode(300, 200), "SFML Plucked String Sound Lite");
    sf::Event event;
    double freq;
    std::vector<sf::Int16> samples;

    std::vector<std::vector<sf::Int16>> first;
    std::vector<sf::SoundBuffer> sec;
    std::vector<sf::Sound> third;

    for (int i = 0; i < 37; i++) {
        freq = 440.0 * pow(2.0, (i-24.0)/12.0);
        StringSound gs1(freq);
         first.push_back(makeSamples(gs1));
    }

    for (int i = 0; i < 37; i++) {
        sf::SoundBuffer buf1;
         if (!buf1.loadFromSamples(&first[i][0], first[i].size(), 2, SAMPLES_PER_SEC)) {
            throw std::runtime_error("failed to load from samples");
         }
         sec.push_back(buf1);
    }

    for (int i = 0; i < 37; i++) {
           sf::Sound sound1;
           sound1.setBuffer(sec[i]);
           third.push_back(sound1);
    }

    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::TextEntered) {
                unsigned int temp = KEY.find(event.text.unicode);
                third[temp].play();
            }

            window.clear();
            window.display();
        }
    }
    return 0;
}


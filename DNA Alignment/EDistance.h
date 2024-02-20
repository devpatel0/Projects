#pragma once
  // Copyright [2022] <Dev Patel>
/**
 * @file EDistance.h
 * @author Dev Patel
 * @brief 
 * @version 0.1
 * @date 2022-04-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdint.h>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <memory>
#include <stdexcept>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>




class ED {
 public:
ED();
ED(std::string _s1, std::string _s2);
int penalty(char a, char b);
int min(int a, int b, int c);
int OptDistance();
std::string Alignment();
 private:
std::string s1;  // NOLINT
std::string s2;  // NOLINT
std::vector<std::vector<int>> _M;
};


#pragma once
  // Copyright [2022] <Dev Patel
  /**
  * @file CircularBuffer.h
  * @author Dev Patel
  * @brief
  * @version 0.1
  * @date 2022-03-20
  *
  * @copyright Copyright(c) 2022
  *
  */
#ifndef BUFF  // NOLINT
#define BUFF
#include <stdint.h>
#include <iostream>
#include <vector>
#include <memory>
#include <stdexcept>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>


#endif    // NOLINT
class CircularBuffer{
 public:
CircularBuffer(size_t capacity);  // create an empty ring buffer, with given max capacity
size_t size();  // return number of items currently in the buffer
bool isEmpty();  // is the buffer empty (size equals zero)?
bool isFull();  // is the buffer full (size equals capacity)?
void enqueue(int16_t x);  // add item x to the end
int16_t dequeue();  // delete and return item from the front
int16_t peek();  // return (but do not delete) item from the front
 private:
  size_t capacity1;  // my array capacity
  size_t size1;  // my array size
  std::vector<int16_t> ringB;  // my ring buffer
};

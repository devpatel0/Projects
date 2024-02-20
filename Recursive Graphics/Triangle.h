
/**  // NOLINT  
 * @file Triangle.h
 * @author your name (dev_patel@student.uml.edu)
 * @brief 
 * @version 0.1
 * @date 2022-03-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// "Copyright [2022] <Dev Patel>"
#ifndef TFRACT // NOLINT
#define TFRACT

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#endif   // NOLINT
// using namespace std;
// using namespace sf;

class Tri: public sf::Drawable {
 public:
        Tri(double sLength, sf::Vector2f center) {
            left.x = center.x - sLength/2;
            left.y =  center.y - sLength/2;
            right.x = center.x + sLength/2;
            right.y = center.y - sLength/2;
            bottom.x = center.x;
            bottom.y = center.y + sLength/2;
        }

        sf::Vector2f newCenterLeft(double sLength);
        sf::Vector2f newCenterRight(double sLength);
        sf::Vector2f newCenterBottom(double sLength);
 private:
    sf::Vector2f left;
    sf::Vector2f right;
    sf::Vector2f bottom;
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;  // NOLINT
};

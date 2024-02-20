/**
 * @file Triangle.cpp
 * @author Dev Patel (dev_patel@student.uml.edu)
 * @brief 
 * @version 0.1
 * @date 2022-03-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
// "Copyright [2022] <Dev Patel>"
#include "Triangle.h"
#include <vector>
#include <cmath>

void Tri::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    sf::ConvexShape tri;
    tri.setPointCount(3);
    tri.setPoint(0, left);
    tri.setPoint(1, right);
    tri.setPoint(2, bottom);

    tri.setFillColor(sf::Color::Transparent);
    tri.setOutlineColor(sf::Color::Red);
    tri.setOutlineThickness(2);
    tri.setOrigin(0, 0);

    target.draw(tri);
}

sf::Vector2f Tri::newCenterLeft(double sLength) {
    double height = sLength/2 * 0.5 * sqrt(3);
    return sf::Vector2f(left.x, left.y - (height/2));
}
sf::Vector2f Tri::newCenterRight(double sLength) {
    double height = sLength/2 * 0.5 * sqrt(3);
    return sf::Vector2f(right.x + (sLength/4), right.y + (height/2));
}
sf::Vector2f Tri::newCenterBottom(double sLength) {
     double height = sLength/2 * 0.5 * sqrt(3);
    return sf::Vector2f(bottom.x - (sLength/4), bottom.y + (height/2));
}

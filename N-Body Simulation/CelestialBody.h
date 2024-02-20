#pragma once

//  #include "Universe.h"
#include <fstream>
#include <iostream>
#include <string>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <memory>

using namespace std;
using namespace sf;

class CelestialBody : public Drawable{
public:
CelestialBody();
CelestialBody(double initX, double initY, double initVelX, double initVelY, double initMass, string initFile);
void setx(double initX){
    x = initX;
}
void sety(double initY){
    y = initY;
}
void setVelX(double initVelX){
    intVelocityX = initVelX;
}
void setVelY(double initVelY){
    intVelocityY = initVelY;
}
void setMass(double initMass){
    mass = initMass;
}

double getX(void){
    return x;
}
double getY(void){
    return y;
}
double getIntVelocityX(void){
    return intVelocityX;
}
double getIntVelocityY(void){
    return intVelocityY;
}
double getMass(void){
    return mass;
}
friend istream& operator>>(istream& in, CelestialBody &thing);
void set(int sizeX1, int sizeY1, double uRadius);

private:
double x;
double y;
double intVelocityX;
double intVelocityY;
double mass;
string fileName;
Sprite sprite1;
Texture texture1;

virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const
    {
        target.draw(sprite1, states);
    }
};
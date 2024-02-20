#pragma once
#include "CelestialBody.h"
// #include <iostream>
// #include <string>
// #include <SFML/System.hpp>
// #include <SFML/Window.hpp>
// #include <SFML/Graphics.hpp>
// #include <memory>
// #include <vector>


// using namespace std;
// using namespace sf;

class Universe{
public:
    friend const istream& operator>> (istream& in, Universe &thing);
    int getNumPlanets(){
        return numPlanets;
    }

    double getNumRadius(){
        return radius;
    }
    
    CelestialBody getBody(int i){
        return *(planet[i]);
    }

    void scale(int sizeX, int sizeY);

    void step(double seconds);

private:
    vector<shared_ptr<CelestialBody>> planet;
    double radius;
    int numPlanets;
    double seconds;
};
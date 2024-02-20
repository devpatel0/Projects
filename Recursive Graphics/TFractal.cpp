// "Copyright [2022] <Dev Patel>"
#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Triangle.h"

// using namespace std;
// using namespace sf;


void fTree(double length, int depth, sf::RenderWindow &window, sf::Vector2f center);  // NOLINT

int main(int argc, char *argv[]) {
    double length = atoi(argv[1]);
    int depth = atoi(argv[2]);
    sf::RenderWindow window(sf::VideoMode(length*4, length*4), "TRIANGLE");
    window.setFramerateLimit(60);
    sf::Vector2f center(window.getSize().x/2, window.getSize().y/2);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        fTree(length, depth, window, center);

        window.display();
    }




    return 0;
}

void fTree(double length, int depth, sf::RenderWindow &window, sf::Vector2f center) {  // NOLINT
    Tri triangle(length, center);
    window.draw(triangle);

    if (depth > 0) {
        fTree(length/2, depth - 1, window, triangle.newCenterLeft(length));
        fTree(length/2, depth - 1, window, triangle.newCenterRight(length));
        fTree(length/2, depth - 1, window, triangle.newCenterBottom(length));
    } else {
        return;
    }
}


#include <iostream>
#include <string>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "CelestialBody.h"
#include "Universe.h"

using namespace std;
int main(){
    sf::Image image;

    Universe uni;
    cin >> uni;
	if (!image.loadFromFile("starfield.jpg")){
		return -1;
    }
    sf::Vector2u size = image.getSize();
	sf::RenderWindow window1(sf::VideoMode(size.x, size.y), "window1");
    sf::Texture texture;
	texture.loadFromImage(image);

	sf::Sprite sprite;
	sprite.setTexture(texture);

    uni.scale(size.x, size.y);

    while (window1.isOpen())
	{
		sf::Event event;
		while (window1.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window1.close();
		}

		window1.clear();
		window1.draw(sprite);
        for(int i =0; i < uni.getNumPlanets(); i++){
            window1.draw(uni.getBody(i));
        }
		window1.display();
	}

    
}
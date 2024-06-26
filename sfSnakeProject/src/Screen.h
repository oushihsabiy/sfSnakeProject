#ifndef SCREEN_H
#define SCREEN_H

#include <SFML/Graphics.hpp>
#include <set>

class Screen
{
public:
	virtual void handleInput(sf::RenderWindow& window) = 0;
	virtual void update(sf::Time delta, sf::Time& generatefruiflag) = 0;
	virtual void render(sf::RenderWindow& window) = 0;

};

#endif
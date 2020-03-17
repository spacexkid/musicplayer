#include "Button.h"
#include <iostream>

Button::Button(int id, float x, float y, std::string location) : xpos(x), ypos(y)
{
	textures.load(id, location);
	sprite.setTexture(textures.get(id));
	sprite.setPosition(xpos, ypos);
}

Button::~Button()
{

}

void Button::show(sf::RenderWindow& mWindow)
{
	mWindow.draw(sprite);
}

void Button::handleClick(sf::RenderWindow& mWindow)
{
	std::cout << "I was clicked" << std::endl;
}
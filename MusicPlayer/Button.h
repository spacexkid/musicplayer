#pragma once

#include <SFML/Graphics.hpp>
#include "TextureLoader.h"
#include "MusicPlayer.h"

class Button
{
public:
	Button(int id, float x, float y, std::string location); // Floats are for position, string for the file path
	~Button();
	virtual void show(sf::RenderWindow& mWindow);
	virtual void handleClick(sf::RenderWindow& mWindow);

protected:
	TextureLoader textures;
	sf::Sprite sprite;
	float xpos;
	float ypos;
};
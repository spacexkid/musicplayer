#include <SFML/Audio.hpp>
#include "PauseButton.h"
#include <iostream>

void PauseButton::handleClick(sf::RenderWindow& mWindow, MusicPlayer& mPlayer)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		if (sprite.getGlobalBounds().contains(mWindow.mapPixelToCoords(sf::Mouse::getPosition(mWindow))))
		{
			mPlayer.setPaused(true);
			std::cout << "Paused" << std::endl;
		}
	}
	if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
	{
		if (sprite.getGlobalBounds().contains(mWindow.mapPixelToCoords(sf::Mouse::getPosition(mWindow))))
		{
			mPlayer.setPaused(false);
			std::cout << "Paused" << std::endl;
		}
	}
}
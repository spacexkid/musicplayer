#include <SFML/Audio.hpp>
#include "StopButton.h"
#include <iostream>

void StopButton::handleClick(sf::RenderWindow& mWindow, MusicPlayer& mPlayer)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		if (sprite.getGlobalBounds().contains(mWindow.mapPixelToCoords(sf::Mouse::getPosition(mWindow))))
		{
			mPlayer.stop();
			std::cout << "Stopped" << std::endl;
		}
	}
	
}
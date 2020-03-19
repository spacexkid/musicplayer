#include <SFML/Audio.hpp>
#include "PlayButton.h"
#include <iostream>
#include "MusicPlayer.h"

void PlayButton::handleClick(sf::RenderWindow& mWindow, MusicPlayer& mPlayer, int id)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		if (sprite.getGlobalBounds().contains(mWindow.mapPixelToCoords(sf::Mouse::getPosition(mWindow))))
		{
			mPlayer.play(id);
			std::cout << "Playing" << std::endl;
		}
	}
	
}
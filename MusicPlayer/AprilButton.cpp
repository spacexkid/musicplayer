#include "AprilButton.h"
#include <iostream>

void AprilButton::handleClick(sf::RenderWindow& mWindow, int& id)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		if (sprite.getGlobalBounds().contains(mWindow.mapPixelToCoords(sf::Mouse::getPosition(mWindow))))
		{
			std::cout << "Changing to fortnite" << std::endl;
			changeId(id);
		}
	}
}

void AprilButton::changeId(int& id)
{
	id = 1;
}
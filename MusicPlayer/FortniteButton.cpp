#include "FortniteButton.h"
#include <iostream>

void FortniteButton::handleClick(sf::RenderWindow& mWindow, int& id)
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

void FortniteButton::changeId(int& id)
{
	id = 2;
}
#include "MinecraftButton.h"
#include <iostream>

void MinecraftButton::handleClick(sf::RenderWindow& mWindow, int& id)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		if (sprite.getGlobalBounds().contains(mWindow.mapPixelToCoords(sf::Mouse::getPosition(mWindow))))
		{
			std::cout << "Changing to minecraft" << std::endl;
			changeId(id);
		}
	}
}

void MinecraftButton::changeId(int& id)
{
	id = 0;
}
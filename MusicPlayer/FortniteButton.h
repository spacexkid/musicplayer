#pragma once
#include "Button.h"
#include <SFML/Audio.hpp>
#include "MusicPlayer.h"

class FortniteButton : public Button
{
public:
	void handleClick(sf::RenderWindow& mWindow, int& id);
	void changeId(int& id);
	using Button::Button;

};
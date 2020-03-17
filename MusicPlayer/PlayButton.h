#pragma once
#include "Button.h"
#include <SFML/Audio.hpp>
#include "MusicPlayer.h"

class PlayButton : public Button
{
public:
	void handleClick(sf::RenderWindow& mWindow, MusicPlayer& mPlayer);
	using Button::Button;


};
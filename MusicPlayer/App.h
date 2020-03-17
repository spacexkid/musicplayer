#pragma once
#include <SFML/Graphics.hpp>
#include "Button.h"
#include "PlayButton.h"
#include "PauseButton.h"
#include "StopButton.h"
#include "MusicPlayer.h"

class App
{
public:
	App();
	void run();
	MusicPlayer mPlayer;

private:
	void processEvents();
	void render();
	void handleInput(sf::Keyboard::Key key, bool isPressed);

private:
	sf::RenderWindow mWindow;
	PlayButton playButton{ 0, 175.0f, 450.0f, "buttons/play.png" };
	PauseButton pauseButton{ 0, 325.0f, 450.0f, "buttons/pause.png" };
	StopButton stopButton{ 0, 475.0f, 450.0f, "buttons/stop.png" };;

	
};
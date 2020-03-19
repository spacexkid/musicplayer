#pragma once
#include <SFML/Graphics.hpp>
#include "Button.h"
#include "PlayButton.h"
#include "PauseButton.h"
#include "StopButton.h"
#include "MusicPlayer.h"
#include "FortniteButton.h"
#include "MinecraftButton.h"
#include "AprilButton.h"

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
	int id = 0;
	sf::RenderWindow mWindow;
	PlayButton playButton{ 0, 175.0f, 450.0f, "buttons/play.png" };
	PauseButton pauseButton{ 1, 325.0f, 450.0f, "buttons/pause.png" };
	StopButton stopButton{ 2, 475.0f, 450.0f, "buttons/stop.png" };
	FortniteButton fortniteButton{ 3, 175.0f, 300.0f, "buttons/Fortnite.png" };
	MinecraftButton minecraftButton{ 4, 325.0f, 300.0f, "buttons/MC.png" };
	AprilButton aprilButton{ 5, 475.0f, 300.0f, "buttons/april.png" };
};
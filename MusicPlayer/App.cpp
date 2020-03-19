/*
 * App.cpp
 *
 *  Created on: Mar 1, 2020
 *      Author: musko
 */

#include "App.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "TextureLoader.h"



App::App() : mWindow(sf::VideoMode(800, 600), "Music Player")
{
	//Left empty as everything is initialized up top
}



//Method handles events and rendering
void App::run()
{
	while (mWindow.isOpen())
	{
		processEvents();
		render();
	}
}

//This method handles events
void App::processEvents()
{
	sf::Event event;
	while (mWindow.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::KeyPressed:
			handleInput(event.key.code, true);
			break;
		case sf::Event::Closed:
			mWindow.close();
			break;
		case sf::Event::MouseButtonPressed:
			playButton.handleClick(mWindow, mPlayer, id);
			pauseButton.handleClick(mWindow, mPlayer);
			stopButton.handleClick(mWindow, mPlayer);
			fortniteButton.handleClick(mWindow, id);
			minecraftButton.handleClick(mWindow, id);
			aprilButton.handleClick(mWindow, id);
			break;
		}
	}
}

void App::handleInput(sf::Keyboard::Key key, bool isPressed)
{
	if (key == sf::Keyboard::Escape)
	{
		mWindow.close();
	}

}

void App::render() {
	mWindow.clear();
	playButton.show(mWindow);
	pauseButton.show(mWindow);
	stopButton.show(mWindow);
	fortniteButton.show(mWindow);
	minecraftButton.show(mWindow);
	aprilButton.show(mWindow);
	mWindow.display();
}




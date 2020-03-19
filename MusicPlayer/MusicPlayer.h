#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <map>

class MusicPlayer : private sf::NonCopyable
{
public:
	MusicPlayer();
	void play(int id);
	void stop();

	void setPaused(bool paused);
	void setVol(float volume);

private:
	sf::Music mMusic;
	std::map<int, std::string> mFilenames; //Stores file paths with an int id
	float mVolume;

};
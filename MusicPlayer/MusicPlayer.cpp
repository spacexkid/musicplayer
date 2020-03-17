#include "MusicPlayer.h"

MusicPlayer::MusicPlayer() : mMusic(), mFilenames(), mVolume(100.0f)
{
	mFilenames[0] = "Minecraft.ogg";
}

void MusicPlayer::play(int id)
{
	std::string filename = mFilenames[id];

	if (!mMusic.openFromFile(filename))
		throw std::runtime_error("Music " + filename + "could not be loaded.");

	mMusic.setVolume(mVolume);
	mMusic.setLoop(true);
	mMusic.play();
}

void MusicPlayer::stop()
{
	mMusic.stop();
}

void MusicPlayer::setPaused(bool paused)
{
	if (paused == true)
		mMusic.pause();
	else
		mMusic.play();

}

void MusicPlayer::setVol(float volume)
{
	mMusic.setVolume(volume);
}
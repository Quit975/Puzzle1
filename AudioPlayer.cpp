#include "AudioPlayer.h"
#include <iostream>

AudioPlayer::AudioPlayer()
{
}

AudioPlayer::~AudioPlayer()
{
}

void AudioPlayer::PlaySoundById(int id)
{
	std::cout << "Playing sound id " << id << "\n";
}

#pragma once

#include <iostream>

class AudioPlayer
{
public:
	AudioPlayer() {};
	~AudioPlayer() {};

	void PlaySoundById(int id)
	{
		std::cout << "Playing sound id " << id << "\n";
	};
};
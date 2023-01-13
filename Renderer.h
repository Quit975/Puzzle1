#pragma once
//you can ONLY include standard C++ libraries
//you CANNOT include AudioPlayer or any intermediate class


class Renderer
{
public:
	Renderer() {};
	~Renderer() {};

	void RenderFrame(int frameNr)
	{
		if (((frameNr * secretNr) % 3) == 0)
		{
			// Play a sound with id = frameNr * secretNr by calling the PlaySoundById from the AudioPlayer
		}
	}

private:
	int secretNr = 42;

};
#include "Renderer.h"

Renderer::Renderer()
{
}

Renderer::~Renderer()
{
}

void Renderer::RenderFrame(int frameNr)
{
	if (((frameNr * secretNr) % 3) == 0)
	{
		// Play a sound with id = frameNr * secretNr by calling the PlaySoundById from the AudioPlayer
	}
}

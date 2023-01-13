#include "AudioPlayer.h"
#include "Renderer.h"

int main()
{
	AudioPlayer player;
	Renderer renderer;

	for (int i = 0; i < 1000; i++)
	{
		renderer.RenderFrame(i);
	}

	return 0;
}
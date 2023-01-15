#pragma once
#include <functional>
//you can ONLY include standard C++ libraries
//you CANNOT include AudioPlayer or any intermediate class


class Renderer
{
public:
	Renderer();
	~Renderer();

	void RenderFrame(int frameNr);
	void SetAudioCallback(std::function<void(int)> fun);
	
private:
	int secretNr = 42;
	std::function<void(int)> audioCallback;
};
#pragma once
//you can ONLY include standard C++ libraries
//you CANNOT include AudioPlayer or any intermediate class


class Renderer
{
public:
	Renderer();
	~Renderer();

	void RenderFrame(int frameNr);
	
private:
	int secretNr = 42;
};
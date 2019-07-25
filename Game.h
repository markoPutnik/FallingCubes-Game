#pragma once
#include <SDL.h>
#include <iostream>
#include <vector>
#include <cstdlib>

using std::cout;
using std::vector;

class Game {

private:

	bool m_Running;

	SDL_Window* window;
	

public:

	SDL_Renderer* renderer;

	SDL_Texture* texture;
	SDL_Texture* floorTex;
	SDL_Texture* cubeTex;
	SDL_Texture* bgTex;

	int arrow1 = 0;
	int counter = 0;

	Game() {
		m_Running = false;
	}
	~Game() {
		
	}

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void update();
	void render();
	void handleEvents();
	void clean();

	bool isRunning() {
		return m_Running;
	}

};
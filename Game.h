#pragma once
#include <SDL.h>
#include <iostream>

using std::cout;

class Game {

private:

	bool m_Running;

	SDL_Window* window;
	

public:

	SDL_Renderer* renderer;
	SDL_Texture* texture;
	SDL_Texture* floorTex;

	int arrow1 = 0;
	int arrow2 = 0;
	int arrow3 = 0;
	int movement = 0;

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
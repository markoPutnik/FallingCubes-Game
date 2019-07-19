#pragma once
#include "Game.h"
#include <SDL.h>
#include "TextureManager.h"
#include "Collision.h"

using namespace std;


SDL_Texture* cubeTex1;
SDL_Texture* cubeTex2;
SDL_Texture* cubeTex3;
SDL_Texture* cubeTex4;

SDL_Rect cubeRect1{ rand() % 1018, 0, 22, 22 };
SDL_Rect cubeRect2{ rand() % 1018, -400, 22, 22 };
SDL_Rect cubeRect3{ rand() % 1018, -800, 22, 22 };
SDL_Rect cubeRect4{ rand() % 1018, -1200, 22, 22 };


class Renderer {

public:

	Renderer() {



	}


	static void renderAll(SDL_Renderer* ren) {

		SDL_Texture* cubeTex1 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex2 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex3 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex4 = TextureManager::getTex(ren, "assets/Cube.bmp");

		cubeRect1.y++;
		cubeRect2.y++;
		cubeRect3.y++;
		cubeRect4.y++;


		SDL_RenderCopy(ren, cubeTex1, nullptr, &cubeRect1);
		SDL_RenderCopy(ren, cubeTex2, nullptr, &cubeRect2);
		SDL_RenderCopy(ren, cubeTex3, nullptr, &cubeRect3);
		SDL_RenderCopy(ren, cubeTex4, nullptr, &cubeRect4);

	}

};
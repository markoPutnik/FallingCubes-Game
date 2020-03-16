#pragma once
#include "Game.h"
#include <SDL.h>
#include "TextureManager.h"
#include "Collision.h"
#include <vector>

using namespace std;

class Renderer {

private:

	SDL_Rect cubeRect1;
	SDL_Rect cubeRect2;

	SDL_Texture* cubeTex1;
	SDL_Texture* cubeTex2;

	int m_points = 0;
	int m_timesTouchedTheFloor = 0;

public:

	Renderer() {

		cubeRect1 = { rand() % 1018, 0, 22, 22 };
		cubeRect2 = { rand() % 1018, -400, 22, 22 };

		cout << "Counter is : " << m_points << "\n";

	}

	void checkCollision(const SDL_Rect& character, const SDL_Rect& floor) {

		if (Collision::AABB(character, cubeRect1)) {

			m_points++;

			cout << "Counter is : " << m_points << "\n";

			Collision::changeRect(cubeRect1);

		}
		else if (Collision::AABB(floor, cubeRect1)) {

			m_timesTouchedTheFloor++;

			Collision::changeRect(cubeRect1);

		}

		if (Collision::AABB(character, cubeRect2)) {

			m_points++;

			cout << "Counter is : " << m_points << "\n";

			Collision::changeRect(cubeRect2);

		}
		else if (Collision::AABB(floor, cubeRect2)) {

			m_timesTouchedTheFloor++;

			Collision::changeRect(cubeRect2);

		}

	}

	int times() {
		return m_timesTouchedTheFloor;
	}

	int points() {
		return m_points;
	}

	void renderAll(SDL_Renderer* ren) {

		cubeTex1 = TextureManager::getTex(ren, "assets/Cube.bmp");
		cubeTex2 = TextureManager::getTex(ren, "assets/Cube.bmp");

		cubeRect1.y++;
		cubeRect2.y++;

		SDL_RenderCopy(ren, cubeTex1, nullptr, &cubeRect1);
		SDL_RenderCopy(ren, cubeTex2, nullptr, &cubeRect2);

	}

};

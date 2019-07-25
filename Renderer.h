#pragma once
#include "Game.h"
#include <SDL.h>
#include "TextureManager.h"
#include "Collision.h"
#include <vector>

using namespace std;

bool m_Win = false;

int m_counter = 0;
int m_counter2 = 0;
int testing = 0;
int testing2 = 0;

SDL_Rect cubeRect1{ rand() % 1018, 0, 22, 22 };
SDL_Rect cubeRect2{ rand() % 1018, -400, 22, 22 };
SDL_Rect cubeRect3{ rand() % 1018, -800, 22, 22 };
SDL_Rect cubeRect4{ rand() % 1018, -1200, 22, 22 };
SDL_Rect cubeRect5{ rand() % 1018, -1600, 22, 22 };
SDL_Rect cubeRect6{ rand() % 1018, -2000, 22, 22 };
SDL_Rect cubeRect7{ rand() % 1018, -2400, 22, 22 };
SDL_Rect cubeRect8{ rand() % 1018, -2800, 22, 22 };
SDL_Rect cubeRect9{ rand() % 1018, -3200, 22, 22 };
SDL_Rect cubeRect10{ rand() % 1018, -3600, 22, 22 };
SDL_Rect cubeRect11{ rand() % 1018, -4000, 22, 22 };
SDL_Rect cubeRect12{ rand() % 1018, -4400, 22, 22 };
SDL_Rect cubeRect13{ rand() % 1018, -4800, 22, 22 };
SDL_Rect cubeRect14{ rand() % 1018, -5200, 22, 22 };
SDL_Rect cubeRect15{ rand() % 1018, -5600, 22, 22 };
SDL_Rect cubeRect16{ (rand() % 1018) - 200 , -6000, 22, 22 };
SDL_Rect cubeRect17{ rand() % 1018, -6400, 22, 22 };
SDL_Rect cubeRect18{ rand() % 1018, -6800, 22, 22 };


class Renderer {

public:

	Renderer() {



	}

	static void checkCollision(const SDL_Rect& rec, const SDL_Rect& rec2) {

		if (Collision::AABB(rec, cubeRect1) && testing == 0) {
			m_counter++;
			testing++;
			cubeRect1.x = -70;
			cout << "Counter : " << m_counter << "\n";
			
		}
		else if(Collision::AABB(rec2, cubeRect1) && testing2 == 0){
			m_counter2++;
			testing2++;
			cubeRect1.x = -70;
		}



		if (Collision::AABB(rec, cubeRect2) && (testing == 0 || testing == 1)) {
			m_counter++;
			testing++;
			cubeRect2.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect2) && (testing2 == 0 || testing2 == 1)) {
			m_counter2++;
			testing2++;
			cubeRect2.x = -70;
		}



		if (Collision::AABB(rec, cubeRect3) && (testing >= 0 && testing < 3)) {
			m_counter++;
			testing++;
			cubeRect3.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect3) && testing2 >= 0 && testing2 < 3) {
			m_counter2++;
			testing2++;
			cubeRect3.x = -70;
		}



		if (Collision::AABB(rec, cubeRect4) && (testing >= 0 && testing < 4)) {
			m_counter++;
			testing++;
			cubeRect4.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect4) && testing2 >= 0 && testing2 < 4) {
			m_counter2++;
			testing2++;
			cubeRect4.x = -70;
		}



		if (Collision::AABB(rec, cubeRect5) && (testing >= 0 && testing < 5)) {
			m_counter++;
			testing++;
			cubeRect5.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect5) && testing2 >= 0 && testing2 < 5) {
			m_counter2++;
			testing2++;
			cubeRect5.x = -70;
		}



		if (Collision::AABB(rec, cubeRect6) && (testing >= 0 && testing < 6)) {
			m_counter++;
			testing++;
			cubeRect6.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect6) && testing2 >= 0 && testing2 < 6) {
			m_counter2++;
			testing2++;
			cubeRect6.x = -70;
		}



		if (Collision::AABB(rec, cubeRect7) && (testing >= 0 && testing < 7)) {
			m_counter++;
			testing++;
			cubeRect7.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect7) && testing2 >= 0 && testing2 < 7) {
			m_counter2++;
			testing2++;
			cubeRect7.x = -70;
		}



		if (Collision::AABB(rec, cubeRect8) && (testing >= 0 && testing < 8)) {
			m_counter++;
			testing++;
			cubeRect8.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect8) && testing2 >= 0 && testing2 < 8) {
			m_counter2++;
			testing2++;
			cubeRect8.x = -70;
		}



		if (Collision::AABB(rec, cubeRect9) && (testing >= 0 && testing < 9)) {
			m_counter++;
			testing++;
			cubeRect9.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect9) && testing2 >= 0 && testing2 < 9) {
			m_counter2++;
			testing2++;
			cubeRect9.x = -70;
		}



		if (Collision::AABB(rec, cubeRect10) && (testing >= 0 && testing < 10)) {
			m_counter++;
			testing++;
			cubeRect10.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect10) && testing2 >= 0 && testing2 < 10) {
			m_counter2++;
			testing2++;
			cubeRect10.x = -70;
		}



		if (Collision::AABB(rec, cubeRect11) && (testing >= 0 && testing < 11)) {
			m_counter++;
			testing++;
			cubeRect11.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect11) && (testing2 >= 0 && testing2 < 11)) {
			m_counter2++;
			testing2++;
			cubeRect11.x = -70;
		}



		if (Collision::AABB(rec, cubeRect12) && (testing >= 0 && testing < 12)) {
			m_counter++;
			testing++;
			cubeRect12.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect12) && (testing2 >= 0 && testing2 < 12)) {
			m_counter2++;
			testing2++;
			cubeRect12.x = -70;
		}



		if (Collision::AABB(rec, cubeRect13) && (testing >= 0 && testing < 13)) {
			m_counter++;
			testing++;
			cubeRect13.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect13) && testing2 >= 0 && testing2 < 13) {
			m_counter2++;
			testing2++;
			cubeRect13.x = -70;
		}



		if (Collision::AABB(rec, cubeRect14) && (testing >= 0 && testing < 14)) {
			m_counter++;
			testing++;
			cubeRect14.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect14) && testing2 >= 0 && testing2 < 14) {
			m_counter2++;
			testing2++;
			cubeRect14.x = -70;
		}



		if (Collision::AABB(rec, cubeRect15) && (testing >= 0 && testing < 15)) {
			m_counter++;
			testing++;
			cubeRect15.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect15) && testing2 >= 0 && testing2 < 15) {
			m_counter2++;
			testing2++;
			cubeRect15.x = -70;
		}



		if (Collision::AABB(rec, cubeRect16) && (testing >= 0 && testing < 16)) {
			m_counter++;
			testing++;
			cubeRect16.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect16) && testing2 >= 0 && testing2 < 16) {
			m_counter2++;
			testing2++;
			cubeRect16.x = -70;
		}


		if (Collision::AABB(rec, cubeRect17) && (testing >= 0 && testing < 17)) {
			m_counter++;
			testing++;
			cubeRect17.x = -70;
			cout << "Counter : " << m_counter << "\n";
		}
		else if (Collision::AABB(rec2, cubeRect17) && testing2 >= 0 && testing2 < 17) {
			m_counter2++;
			testing2++;
			cubeRect17.x = -70;
		}



		if (Collision::AABB(rec, cubeRect18) && (testing >= 0 && testing < 18)) {
			m_counter++;
			testing++;
			cubeRect18.x = -70;
			cout << "Counter : " << m_counter << "\n";

			m_Win = true;

		}
		else if (Collision::AABB(rec2, cubeRect18) && testing2 >= 0 && testing2 < 18) {
			m_counter2++;
			testing2++;
			cubeRect18.x = -70;
		}


	}

	static int returnFloor() {
		return m_counter2;
	}

	static bool returnWin() {
		return m_Win;
	}

	static void renderAll(SDL_Renderer* ren) {

		SDL_Texture* cubeTex1 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex2 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex3 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex4 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex5 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex6 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex7 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex8 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex9 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex10 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex11 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex12 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex13 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex14 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex15 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex16 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex17 = TextureManager::getTex(ren, "assets/Cube.bmp");
		SDL_Texture* cubeTex18 = TextureManager::getTex(ren, "assets/Cube.bmp");
	


		cubeRect1.y++;
		cubeRect2.y++;
		cubeRect3.y++;
		cubeRect4.y++;
		cubeRect5.y++;
		cubeRect6.y++;
		cubeRect7.y++;
		cubeRect8.y++;
		cubeRect9.y++;
		cubeRect10.y++;
		cubeRect11.y++;
		cubeRect12.y++;
		cubeRect13.y++;
		cubeRect14.y++;
		cubeRect15.y++;
		cubeRect16.y++;
		cubeRect17.y++;
		cubeRect18.y++;
	


		SDL_RenderCopy(ren, cubeTex1, nullptr, &cubeRect1);
		SDL_RenderCopy(ren, cubeTex2, nullptr, &cubeRect2);
		SDL_RenderCopy(ren, cubeTex3, nullptr, &cubeRect3);
		SDL_RenderCopy(ren, cubeTex4, nullptr, &cubeRect4);
		SDL_RenderCopy(ren, cubeTex5, nullptr, &cubeRect5);
		SDL_RenderCopy(ren, cubeTex6, nullptr, &cubeRect6);
		SDL_RenderCopy(ren, cubeTex7, nullptr, &cubeRect7);
		SDL_RenderCopy(ren, cubeTex8, nullptr, &cubeRect8);
		SDL_RenderCopy(ren, cubeTex9, nullptr, &cubeRect9);
		SDL_RenderCopy(ren, cubeTex10, nullptr, &cubeRect10);
		SDL_RenderCopy(ren, cubeTex11, nullptr, &cubeRect11);
		SDL_RenderCopy(ren, cubeTex12, nullptr, &cubeRect12);
		SDL_RenderCopy(ren, cubeTex13, nullptr, &cubeRect13);
		SDL_RenderCopy(ren, cubeTex14, nullptr, &cubeRect14);
		SDL_RenderCopy(ren, cubeTex15, nullptr, &cubeRect15);
		SDL_RenderCopy(ren, cubeTex16, nullptr, &cubeRect16);
		SDL_RenderCopy(ren, cubeTex17, nullptr, &cubeRect17);
		SDL_RenderCopy(ren, cubeTex18, nullptr, &cubeRect18);
	

	}

};
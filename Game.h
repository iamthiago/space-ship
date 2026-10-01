#ifndef SPACESHIP_2D_GAME_H
#define SPACESHIP_2D_GAME_H
#include <SDL.h>

struct Vector2 {
    float x;
    float y;
};

class Game {
public:
    Game();

    bool Initialize();

    void RunLoop();

    void Shutdown();

private:
    void ProcessInput();

    void UpdateGame();

    void GenerateOutput();

    SDL_Window *mWindow;

    SDL_Renderer *mRenderer;

    bool mIsRunning;

    Uint32 mTicksCount;
};

#endif //SPACESHIP_2D_GAME_H

#ifndef SPACESHIP_2D_GAME_H
#define SPACESHIP_2D_GAME_H
#include <SDL.h>
#include <vector>

class Actor;

class Game {
public:
    Game();

    bool Initialize();

    void RunLoop();

    void Shutdown();

    void AddActor(Actor* actor);

    void RemoveActor(Actor * actor);

private:
    void ProcessInput();

    void UpdateGame();

    void GenerateOutput();

    SDL_Window *mWindow;

    SDL_Renderer *mRenderer;

    bool mIsRunning;

    Uint32 mTicksCount;

    // Actors
    bool mUpdatingActors;
    std::vector<class Actor*> mActors;
    std::vector<class Actor*> mPendingActors;
};

#endif //SPACESHIP_2D_GAME_H

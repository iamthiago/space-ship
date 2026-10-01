#ifndef SPACESHIP_2D_ACTOR_H
#define SPACESHIP_2D_ACTOR_H

#include <vector>
#include "Component.h"
#include "Math.h"

class Actor {
public:
    enum State {
        EActive,
        EPaused,
        EDead
    };

    // constructor / destructor
    Actor(class Game *game);

    virtual ~Actor();

    // Update function called from Game (not overridable)
    void Update(float deltaTime);

    // Updates all the components attached to the actor (not overridable)
    void UpdateComponents(float deltaTime);

    // Any actor-specific update code (overridable)
    virtual void UpdateActor(float deltaTime);

    State GetState() const { return mState; }

private:
    // Actor's state
    State mState;

    // Transform
    Vector2 mPosition;
    float mScale;
    float mRotation;

    // Components held by this actor
    std::vector<class Component *> mComponents;
    class Game *mGame;
};

#endif //SPACESHIP_2D_ACTOR_H

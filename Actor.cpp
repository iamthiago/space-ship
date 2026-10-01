#include "Actor.h"
#include "Game.h"

Actor::Actor(class Game *game)
    : mState(EActive)
      , mPosition()
      , mScale(1.0f)
      , mRotation(0)
      , mComponents()
      , mGame(game) {
    mGame->AddActor(this);
}

Actor::~Actor() {
    mGame->RemoveActor(this);
}

void Actor::Update(float deltaTime) {
}

void Actor::UpdateComponents(float deltaTime) {
}

void Actor::UpdateActor(float deltaTime) {
}

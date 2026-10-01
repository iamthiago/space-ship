#include "Component.h"

Component::Component(class Actor *owner, int updateOrder)
    : mOwner(owner)
      , mUpdateOrder(updateOrder) {
}

Component::~Component() = default;

void Component::Update(float deltaTime) {
}

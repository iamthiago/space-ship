#ifndef SPACESHIP_2D_COMPONENT_H
#define SPACESHIP_2D_COMPONENT_H

class Component {
public:
    Component(class Actor *owner, int updateOrder = 100);

    virtual ~Component();

    virtual void Update(float deltaTime);

    int GetUpdateOrder() const { return mUpdateOrder; }

protected:
    class Actor *mOwner;
    int mUpdateOrder;
};

#endif //SPACESHIP_2D_COMPONENT_H

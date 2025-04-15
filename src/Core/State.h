#pragma once

namespace jengine2d
{

class State
{
  public:
    virtual void init() = 0;

    virtual void processInput() = 0;
    virtual void update(float deltaTime) = 0;
    virtual void render() = 0;

    virtual void pause();
    virtual void resume();
};

} // namespace jengine2d

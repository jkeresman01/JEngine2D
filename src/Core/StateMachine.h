#pragma once

#include <memory>
#include <stack>

#include "State.h"

namespace jengine2d
{

typedef std::unique_ptr<State> StateRefT;

class StateMachine
{
  public:
    StateMachine() = default;
    ~StateMachine() = default;

    void addState(StateRefT state, bool isReplacing);
    void removeState();

    StateRefT &getActiveState();

  private:
    std::stack<StateRefT> m_states;
};

} // namespace jengine2d

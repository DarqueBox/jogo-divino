const int ACCEPTED_KEY_BINDINGS[] = {
  sf::Keyboard::Left,
  sf::Keyboard::Right,
  sf::Keyboard::Up,
  sf::Keyboard::Down
}

class MotionController
{
public:
  static std::vector<int> getCurrentKeyPresses()
  {
    std::vector<int> keyPresses;
    for(int i = 0; ACCEPTED_KEY_BINDINGS[i]; ++i)
    {
      if (sf::Keyboard::isKeyPressed(ACCEPTED_KEY_BINDINGS[i]))
        keyPresses.push(ACCEPTED_KEY_BINDINGS[i]);
    }
    return keyPresses;
  }

  static void moveControllables()
  {
    std::vector<int> keyPresses = getCurrentKeyPresses();
    for (std::vector<int>::iterator it = controllables.begin() ; it != myvector.end(); ++it)
    {
      it->control(keyPresses);
    }
  }
  void registerControllable(controllable)
  {
    controllables.push(controllable);
  }
private:
  static std::vector<*Controllable> controllables;
};

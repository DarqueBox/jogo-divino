#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
class AoHView
{
public:
  void registerDrawable(drawable)
  {
    drawables.push(drawable);
  }
  static int run()
  {
    sf::RenderWindow window(sf::VideoMode(1000, 1000, 32), "SFML Window");

    while (window.isOpen())
    {
      MotionController.moveControllables();
      sf::Event event;
      while (window.pollEvent(event))
      {
        if (event.type == sf::Event::Closed)
          window.close();
      }
      window.clear();
      for (std::vector<int>::iterator it = drawables.begin() ; it != myvector.end(); ++it)
      {
        window.draw(*it);
      }

      window.display();
    }

    return 0;
  }

private:
  static std::vector<*Drawable> drawables;
};

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
int main()
{
  sf::RenderWindow window(sf::VideoMode(1000, 1000, 32), "SFML Window");

  sf::Texture front;
  sf::Texture left;
  sf::Texture right;
  sf::Texture back;

  if(!front.loadFromFile("bill_front.png"))
  {
    cout << "ERROR";
  }
  if(!left.loadFromFile("bill_left.png"))
  {
    cout << "ERROR";
  }
  if(!right.loadFromFile("bill_right.png"))
  {
    cout << "ERROR";
  }
  if(!back.loadFromFile("bill_back.png"))
  {
    cout << "ERROR";
  }

  sf::Sprite sprite;
  sprite.scale(sf::Vector2f(3.f, 3.f));
  sprite.setTexture(front);

  while (window.isOpen())
  {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
      sprite.move(sf::Vector2f(-1, 0));
      sprite.setTexture(left);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
      sprite.move(sf::Vector2f(1, 0));
      sprite.setTexture(right);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
      sprite.move(sf::Vector2f(0, -1));
      sprite.setTexture(back);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
      sprite.move(sf::Vector2f(0, 1));
      sprite.setTexture(front);
    }
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
        window.close();
    }
    window.clear();
    window.draw(sprite);
    window.display();
  }

  return 0;
}

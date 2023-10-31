#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>

void pollEvents(sf::RenderWindow &window, sf::Vector2f &mousePosition)
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        switch (event.type)
        {
        case sf::Event::Closed:
            window.close();
            break;
        default:
            break;
        }
    }
}

void redrawFrame(sf::RenderWindow &window, sf::Sprite &cat)
{
    window.clear(sf::Color::White);
    window.draw(cat);
    window.display();
}

int main()
{
    constexpr unsigned WINDOW_WIDTH = 600;
    constexpr unsigned WINDOW_HEIGHT = 600;

    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "Cat", sf::Style::Default, settings);

    sf::Vector2f mousePosition;
    sf::Texture playerTexture;
    sf::Sprite player;
    if (!playerTexture.loadFromFile("cat.png"))
    {
        std::cerr << "Ошибка при загрузке текстуры из файла cat.png" << std::endl;
    }
    else
    {
        player.setTexture(playerTexture);
        player.setPosition(WINDOW_HEIGHT / 2, WINDOW_WIDTH / 2);
    }

    while (window.isOpen())
    {
        pollEvents(window, mousePosition);
        redrawFrame(window, player);
    }
}
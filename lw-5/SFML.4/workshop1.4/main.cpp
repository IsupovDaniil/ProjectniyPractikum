#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>

float onMouseClick(const sf::Event::MouseButtonEvent &event, sf::Vector2f &mousePosition)
{
    mousePosition = {float(event.x), float(event.y)};
}

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
        case sf::Event::MouseButtonPressed:
            onMouseClick(event.mouseButton, mousePosition);
            break;
        default:
            break;
        }
    }
}

void setPlayerScale(sf::Sprite &player, float widthMultiplier, float heightMultiplier)
{
    sf::Vector2f targetSize(sf::VideoMode::getDesktopMode().height / 16, sf::VideoMode::getDesktopMode().height / 16); //целевой размер
    player.setScale(
        targetSize.x / player.getLocalBounds().width * widthMultiplier,
        targetSize.y / player.getLocalBounds().height * heightMultiplier);
}

void updatePosition(const sf::Vector2f &mousePosition, sf::Sprite &player, float dt)
{
    const sf::Vector2f delta = mousePosition - player.getPosition();
    const float deltaLength = std::sqrt(delta.x * delta.x + delta.y * delta.y);
    const sf::Vector2f direction = {delta.x / deltaLength, delta.y / deltaLength};
    const float speed = 40.0f;
    player.move(direction * speed * dt);
    if (delta.x >= 0)
    {
        setPlayerScale(player, 1, 1);
    }
    else
    {
        setPlayerScale(player, -1, 1);
    }
}

void update(const sf::Vector2f &mousePosition, sf::Sprite &player, sf::Clock &clock)
{
    const float dt = clock.restart().asSeconds();
    updatePosition(mousePosition, player, dt);
}

void redrawFrame(sf::RenderWindow &window, sf::Sprite &player)
{
    window.clear(sf::Color::White);
    window.draw(player);
    window.display();
}

int main()
{
    constexpr unsigned WINDOW_WIDTH = 900;
    constexpr unsigned WINDOW_HEIGHT = 900;

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

    sf::Clock clock;

    while (window.isOpen())
    {
        pollEvents(window, mousePosition);
        update(mousePosition, player, clock);
        redrawFrame(window, player);
    }
}
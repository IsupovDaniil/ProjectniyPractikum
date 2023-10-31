#include <SFML/Graphics.hpp>
#include <cmath>

const unsigned WINDOW_WIDTH = 800;
const unsigned WINDOW_HEIGHT = 600;

int main()
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Wave Moving Ball");
    sf::Clock clock;
    sf::Clock clock1;

    sf::Vector2f position(10, 350);

    constexpr float BALL_SIZE = 40;
    sf::CircleShape ball(BALL_SIZE);
    ball.setFillColor(sf::Color(255, 255, 255));

    float speedX = 75.f;
    constexpr float amplitude = 100.f;
    constexpr float period = 2;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        const float deltaTime = clock.restart().asSeconds();
        const float time = clock1.getElapsedTime().asSeconds();
        position.x += speedX * deltaTime;

        if ((position.x + 2 * BALL_SIZE >= WINDOW_WIDTH && (speedX > 0)) || ((position.x < 0) && (speedX < 0)))
        {
            speedX = -speedX;
        }

        const float wavePhase = time * float(2 * M_PI);
        const float y = amplitude * std::sin(wavePhase / period);
        const sf::Vector2f offset = {0, y};

        ball.setPosition(position + offset);

        window.clear();
        window.draw(ball);
        window.display();
    }
}
#include <SFML/Graphics.hpp>
#include <cmath>

constexpr unsigned WINDOW_WIDTH = 900;
constexpr unsigned WINDOW_HEIGHT = 900;

struct Eye
{
    sf::CircleShape white;
    sf::CircleShape eyeball;
};

void initEyes(Eye &leftEye, Eye &rightEye)
{
    leftEye.white.setFillColor(sf::Color(sf::Color::White));
    leftEye.eyeball.setFillColor(sf::Color(sf::Color::Black));
    rightEye.white.setFillColor(sf::Color(sf::Color::White));
    rightEye.eyeball.setFillColor(sf::Color(sf::Color::Black));

    leftEye.white.setPosition({WINDOW_WIDTH / 2 - 175, WINDOW_HEIGHT / 2});
    leftEye.eyeball.setPosition({WINDOW_WIDTH / 2 - 75, WINDOW_HEIGHT / 2});
    leftEye.white.setRadius(80);
    leftEye.eyeball.setRadius(30);
    leftEye.white.setScale(1, 2);
    leftEye.white.setOrigin(35, 70);
    leftEye.eyeball.setOrigin(25, 25);

    rightEye.white.setPosition({WINDOW_WIDTH / 2 + 100, WINDOW_HEIGHT / 2});
    rightEye.eyeball.setPosition({WINDOW_WIDTH / 2 + 75, WINDOW_HEIGHT / 2});
    rightEye.white.setRadius(80);
    rightEye.eyeball.setRadius(30);
    rightEye.white.setScale(1, 2);
    rightEye.white.setOrigin(35, 70);
    rightEye.eyeball.setOrigin(25, 25);
}

float onMouseMove(const sf::Event::MouseMoveEvent &event, sf::Vector2f &mousePosition)
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
        case sf::Event::MouseMoved:
            onMouseMove(event.mouseMove, mousePosition);
            break;
        default:
            break;
        }
    }
}

void update(const sf::Vector2f &mousePosition, Eye &leftEye, Eye &rightEye)
{
    const sf::Vector2f leftEyePos = leftEye.white.getPosition();
    sf::Vector2f leftDelta = mousePosition - leftEyePos;

    leftDelta.x = std::max(-35.0f, std::min(35.0f, leftDelta.x));
    leftDelta.y = std::max(-70.0f, std::min(70.0f, leftDelta.y));

    leftEye.eyeball.setPosition({leftEyePos.x + leftDelta.x + 35,
                                 leftEyePos.y + leftDelta.y});

    const sf::Vector2f rightEyePos = rightEye.white.getPosition();
    sf::Vector2f rightDelta = mousePosition - rightEyePos;

    rightDelta.x = std::max(-35.0f, std::min(35.0f, rightDelta.x));
    rightDelta.y = std::max(-70.0f, std::min(70.0f, rightDelta.y));

    rightEye.eyeball.setPosition({rightEyePos.x + rightDelta.x + 35,
                                  rightEyePos.y + rightDelta.y});
}

void redrawFrame(sf::RenderWindow &window, Eye &leftEye, Eye &rightEye)
{
    window.clear();
    window.draw(leftEye.white);
    window.draw(leftEye.eyeball);
    window.draw(rightEye.white);
    window.draw(rightEye.eyeball);
    window.display();
}

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "Eyes follows mouse", sf::Style::Default, settings);

    Eye leftEye;
    Eye rightEye;
    sf::Vector2f mousePosition;

    initEyes(leftEye, rightEye);
    while (window.isOpen())
    {
        pollEvents(window, mousePosition);
        update(mousePosition, leftEye, rightEye);
        redrawFrame(window, leftEye, rightEye);
    }
}
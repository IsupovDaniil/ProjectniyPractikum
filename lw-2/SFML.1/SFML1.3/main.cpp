#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "house");

    window.clear();

    sf::RectangleShape background;
    background.setSize({800, 600});
    background.setPosition({0, 0});
    background.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(background);

    sf::RectangleShape houseBody;
    houseBody.setSize({500, 300});
    houseBody.setPosition({150, 300});
    houseBody.setFillColor(sf::Color(0x5B, 0x32, 0x1A));
    window.draw(houseBody);

    sf::RectangleShape houseDoor;
    houseDoor.setSize({60, 150});
    houseDoor.setRotation(180);
    houseDoor.setPosition({300, 600});
    houseDoor.setFillColor(sf::Color(0x0, 0x0, 0x0));
    window.draw(houseDoor);

    sf::ConvexShape houseRoof;
    houseRoof.setFillColor(sf::Color(0xA5, 0x2A, 0x2A));
    houseRoof.setPosition({400, 150});
    houseRoof.setPointCount(4);
    houseRoof.setPoint(0, {-90, 0});
    houseRoof.setPoint(1, {+90, 0});
    houseRoof.setPoint(2, {+320, 150});
    houseRoof.setPoint(3, {-320, 150});
    window.draw(houseRoof);

    sf::RectangleShape houseDimohod1;
    houseDimohod1.setSize({40, 100});
    houseDimohod1.setRotation(180);
    houseDimohod1.setPosition({500, 225});
    houseDimohod1.setFillColor(sf::Color(0x0, 0x0, 0x0));
    window.draw(houseDimohod1);

    sf::CircleShape houseDim1(20);
    houseDim1.setPosition({460, 95});
    houseDim1.setFillColor(sf::Color(0xBC, 0xBC, 0xBC));
    window.draw(houseDim1);

    sf::RectangleShape houseDimohod2;
    houseDimohod2.setSize({60, 60});
    houseDimohod2.setPosition({450, 115});
    houseDimohod2.setFillColor(sf::Color(0x0, 0x0, 0x0));
    window.draw(houseDimohod2);

    sf::CircleShape houseDim2(25);
    houseDim2.setPosition({475, 65});
    houseDim2.setFillColor(sf::Color(0xBC, 0xBC, 0xBC));
    window.draw(houseDim2);

    sf::CircleShape houseDim3(30);
    houseDim3.setPosition({490, 45});
    houseDim3.setFillColor(sf::Color(0xBC, 0xBC, 0xBC));
    window.draw(houseDim3);

    sf::CircleShape houseDim4(35);
    houseDim4.setPosition({520, 15});
    houseDim4.setFillColor(sf::Color(0xBC, 0xBC, 0xBC));
    window.draw(houseDim4);

    window.display();

    sf::sleep(sf::seconds(5));
}
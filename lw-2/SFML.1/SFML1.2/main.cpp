#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "title");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({30, 200});
    shape1.setRotation(0);
    shape1.setPosition({100, 150});
    shape1.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({30, 210});
    shape2.setRotation(-152.5);
    shape2.setPosition({130, 350});
    shape2.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({30, 200});
    shape3.setRotation(0);
    shape3.setPosition({200, 150});
    shape3.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({30, 170});
    shape4.setRotation(20);
    shape4.setPosition({350, 150});
    shape4.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape4);

    sf::RectangleShape shape5;
    shape5.setSize({30, 160});
    shape5.setRotation(-20);
    shape5.setPosition({350, 170});
    shape5.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({30, 165});
    shape6.setRotation(-90);
    shape6.setPosition({280, 325});
    shape6.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({30, 25});
    shape7.setPosition({280, 325});
    shape7.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({30, 25});
    shape8.setPosition({415, 325});
    shape8.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({30, 200});
    shape9.setPosition({500, 150});
    shape9.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape9);

    sf::RectangleShape shape10;
    shape10.setSize({100, 30});
    shape10.setRotation(180);
    shape10.setPosition({630, 180});
    shape10.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape10);

    sf::RectangleShape shape11;
    shape11.setSize({100, 30});
    shape11.setRotation(180);
    shape11.setPosition({630, 350});
    shape11.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape11);

    window.display();

    sf::sleep(sf::seconds(5));
}
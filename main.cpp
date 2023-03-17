#include <SFML/Graphics.hpp>
#include <filesystem>
#include <iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Hello World!");

    sf::Font font;
    std::string FONTS_PATH = "fonts/Sansation_Bold.ttf";
    if (!font.loadFromFile(FONTS_PATH))
        return EXIT_FAILURE;
    std::cout << std::filesystem::current_path() <<std::endl;

    sf::Text text("Hello World",font,50);
    text.setFillColor(sf::Color::White);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(text);
        window.display();
    }

    return 0;
}
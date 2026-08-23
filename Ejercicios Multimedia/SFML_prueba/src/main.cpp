
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML Movement");
    window.setFramerateLimit(60); // Cap framerate to 60 FPS

    // 1. Create a circle shape
    sf::CircleShape player(30.0f); // Radius of 30 units
    player.setFillColor(sf::Color::Green);
    player.setOrigin({30.0f, 30.0f}); // Set origin to center
    player.setPosition({400.0f, 300.0f}); // Start in center of screen

    float speed = 5.0f; // Movement speed per frame

    while (window.isOpen())
    {
        while (auto event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // 2. Continuous real-time keyboard handling
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
            player.move({0.0f, -speed});
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
            player.move({0.0f, speed});
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
            player.move({-speed, 0.0f});
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
            player.move({speed, 0.0f});

        // 3. Render
        window.clear(sf::Color::Black);
        window.draw(player); // Draw the circle before displaying
        window.display();
    }

    return 0;
}
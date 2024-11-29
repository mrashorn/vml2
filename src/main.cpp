#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	// create the window
	sf::Vector2f window_resolution;
	window_resolution.x = 1280;
	window_resolution.y = 720;

	sf::RenderWindow window(sf::VideoMode(window_resolution.x, window_resolution.y), "Vehicle Maintenance Log");

	// Prepare the text
	sf::Text welcomeText;
	welcomeText.setCharacterSize(60);
	welcomeText.setFillColor(sf::Color::White);
	welcomeText.setScale(0.5, 0.5);
	sf::Font font;
	font.loadFromFile("fonts/Iceland-Regular.ttf");
	welcomeText.setFont(font);
	welcomeText.setString("Welcome to the Vehicle Maintenance Log");
	welcomeText.setPosition((window_resolution.x / 2) - (welcomeText.getGlobalBounds().width/2), 0); 

	// Prepare the View
	sf::View mainView(sf::FloatRect(0, 0, window_resolution.x, window_resolution.y)); 
	window.setView(mainView);

	while (window.isOpen())
	{

		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}

		window.draw(welcomeText);


		window.display();
	}

	return 0;
}

#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	// create the window
	sf::RenderWindow window(sf::VideoMode(600, 400), "Vehicle Maintenance Log");

	// Prepare the text
	sf::Text welcomeText;
	welcomeText.setCharacterSize(30);
	welcomeText.setFillColor(sf::Color::Cyan);
	sf::Font font;
	font.loadFromFile("fonts/DS-DIGI.TTF");
	welcomeText.setFont(font);
	welcomeText.setPosition(0, 100); // update to upper center of window size
	welcomeText.setString("Welcome to the Vehicle Maintenance Log");

	// Prepare the View
	sf::View mainView(sf::FloatRect(0, 0, 600, 400)); // update to window size dynamically
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

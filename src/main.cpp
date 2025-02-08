#include <iostream>
#include <SFML/Graphics.hpp>


#include "../include/button.h"


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

	Button myButton = Button("Test Vehicle");


	while (window.isOpen())
	{

		// Process events
		sf::Event event;
		while(window.pollEvent(event))
		{
			// Request for closing the window
			if (event.type == sf::Event::Closed)
				window.close();

			// The escape key was pressed
			if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
				window.close();

		}

		// check to see if the mouse hovers over the welcomeText
		if (welcomeText.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))
		{
			welcomeText.setFillColor(sf::Color::Cyan);
		}
		else
		{
			welcomeText.setFillColor(sf::Color::White);
		}


		

		// clear screen
		// window.clear()

		// draw 
		window.draw(welcomeText);
		window.draw(myButton.drawable());


		// update the window
		window.display();
	}

	return 0;
}

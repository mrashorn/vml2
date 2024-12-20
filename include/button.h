#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

class Button
{
	private:
		sf::Text mText;


	public:
		Button(std::string text); // constructor

		std::string getText();
		// setTextCharacterSize
		// setTextColor
		// setTextScale
		// setTextFont
		// setText

};

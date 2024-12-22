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
		void setTextCharacterSize(int size);
		void setTextColor(sf::Color color);
		void setTextScale(float x_scale, float y_scale);
		void setTextFont(sf::Font font);
		void setText(std::string new_text);
		void setPosition(float x_coord, float y_coord);


};

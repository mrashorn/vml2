#include "../include/button.h"


Button::Button(std::string text) // constructor
{
	mText.setString(text);
	this->setTextCharacterSize(44);
	this->setTextColor(sf::Color::White);
	this->setTextScale(0.5, 0.5);
	sf::Font font;
	font.loadFromFile("fonts/Iceland-Regular.ttf");
	this->setTextFont(font);

	// let's add defaults here so we don't have to init every button
	// with 10 lines
}

std::string Button::getText()
{
	return mText.getString();
}

void Button::setTextCharacterSize(int size)
{
	mText.setCharacterSize(size);
}

void Button::setTextColor(sf::Color color)
{
	mText.setFillColor(color);
}

void Button::setTextScale(float x_scale, float y_scale)
{
	mText.setScale(x_scale, y_scale);
}

void Button::setTextFont(sf::Font font)
{
	mText.setFont(font);
}

void Button::setText(std::string new_text)
{
	mText.setString(new_text);
}

void Button::setPosition(float x_coord, float y_coord)
{
	// is this one straight forward?
	xPos = x_coord;
	yPos = y_coord;
	mText.setPosition(xPos, yPos);
}

void Button::setSize()
{
	// somehow need to get the mText.size and then make the button that big as well
	// This will be used to check for mouse collision with the button
	// itself and not the text only
}

sf::Text Button::drawable()
{
	return mText;
}



#include "../include/button.h"


Button::Button(std::string text) // constructor
{
	mText.setString(text);

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
	// where are we setting the button and text as well?
}



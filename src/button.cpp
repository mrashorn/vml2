#include "../include/button.h"


Button::Button(std::string text) // constructor
{
	mText.setString(text);
}

std::string Button::getText()
{
	return mText.getString();
}



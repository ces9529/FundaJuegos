#include "MenuScreen.h"



MenuScreen::MenuScreen(Window* _window): window(_window)
{
	screenIndex = 1;
}


void MenuScreen::initSystem() {

}

void MenuScreen::build() {

}

void MenuScreen::destroy() {}

void MenuScreen::onEntry(){}

void MenuScreen::onExit() {}

void MenuScreen::update() {}

void MenuScreen::draw() {
	checkInput();
}

void MenuScreen::checkInput() {
	SDL_Event evnt;
	while (SDL_PollEvent(&evnt)) {
		
	}
}


MenuScreen::~MenuScreen()
{
}

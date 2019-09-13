#include "Menu.hpp"


Menu::Menu(){
	//Setup clickable regions

	//Play menu item coordinates
	MenuItem playButton;
	playButton.rect.top= 145;
	playButton.rect.height = 235;
	playButton.rect.left = 0;
	playButton.rect.width = 1023;
	playButton.action = Play;

	//Exit menu item coordinates
	MenuItem exitButton;
	exitButton.rect.left = 0;
	exitButton.rect.width = 1023;
	exitButton.rect.top = 383;
	exitButton.rect.height = 235;
	exitButton.action = Exit;

	_menuItems.push_back(playButton);
	_menuItems.push_back(exitButton);

	onMenu = false;
}


Menu::MenuResult Menu::HandleClick(int x, int y){

	std::list<MenuItem>::iterator it;

	for ( it = _menuItems.begin(); it != _menuItems.end(); it++){
		sf::Rect<int> menuItemRect = (*it).rect;
	 	if( (menuItemRect.top + menuItemRect.height) > y
	  	&& menuItemRect.top < y
	   	&& menuItemRect.left < x
	   	&& (menuItemRect.left + menuItemRect.width) > x){
	  	return (*it).action;
		}
	}

	return Nothing;
}



Menu::MenuResult Menu::GetMenuResponse(sf::RenderWindow &window){
	sf::Event menuEvent;

	while(window.pollEvent(menuEvent)){ // fiare avec active cf android studio
  	if(menuEvent.type == sf::Mouse::isButtonPressed(sf::Mouse::Left)){ // sf::Event::TouchBegan) && (event.touch.finger == 0)
			sf::Vector2i position = sf::Mouse::getPosition();
    	return HandleClick(position.x, position.y); //menuEvent.touch.x, .y
		}
  	if(menuEvent.type == sf::Event::Closed)
    	return Exit;
	}
}



Menu::MenuResult Menu::drawMenu(sf::RenderWindow &window){
	//Load menu image from file
	sf::Texture texture;
 	texture.loadFromFile("img/Menu.png");
 	sf::Sprite sprite;
	sprite.setTexture(texture);

	window.draw(sprite);
	window.display();

	return GetMenuResponse(window);
}



bool Menu::getOnMenu(){
	return onMenu;
}



void Menu::setOnMenu(bool onMenu){
	this->onMenu = onMenu;
}

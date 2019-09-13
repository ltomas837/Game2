#ifndef MENU_HPP
#define MENU_HPP

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <list>

class Menu{

public:

	enum MenuResult { Nothing, Exit, Play };
	struct MenuItem{
  	public:
    	sf::Rect<int> rect;
    	MenuResult action;
  };

	Menu();
	bool getOnMenu();
	void setOnMenu(bool);
	MenuResult drawMenu(sf::RenderWindow& window);

private:
	MenuResult GetMenuResponse(sf::RenderWindow& window);
 	MenuResult HandleClick(int x, int y);
 	std::list<MenuItem> _menuItems;
	bool onMenu;
};

#endif

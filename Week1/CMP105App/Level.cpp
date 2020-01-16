#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 5));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	//circle
	circle.setRadius(50);
	circle.setPosition(500, 300);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(2.f);

	//red rect
	rectR.setSize(sf::Vector2f(100, 100));
	rectR.setPosition(500, 300);
	rectR.setFillColor(sf::Color::Red);

	//green rect
	rectG.setSize(sf::Vector2f(50, 50));
	rectG.setPosition(525, 325);
	rectG.setFillColor(sf::Color::Green);

	//blue rect
	rectB.setSize(sf::Vector2f(25, 25));
	rectB.setPosition(537, 337);
	rectB.setFillColor(sf::Color::Blue);

	//render text
	if (!font.loadFromFile("font/arial.ttf")) {
		std::cout << "Error loading font\n";
	}

	text.setFont(font);
	text.setString("Hello world");
	text.setCharacterSize(15);
	text.setPosition(500, 0);
	text.setFillColor(sf::Color::Red);

	//final rect
	rectF.setSize(sf::Vector2f(25, 25));
	rectF.setPosition(1150, 630);
	rectF.setFillColor(sf::Color::Green);

}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();
	rectF.getSize().x;
	rectF.getSize().y;
	rectF.setPosition(pos.x - rectF.getSize().x , pos.y - rectF.getSize().y);
	
	
}

// Render level
void Level::render()
{
	beginDraw();

	//window->draw(rect);
	//window->draw(circle);
	window->draw(text);
	window->draw(rectR);
	window->draw(rectG);
	window->draw(rectB);
	window->draw(rectF);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}
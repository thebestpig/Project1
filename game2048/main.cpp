#include <SFML/Graphics.hpp>
#include <iostream>
class Player { // класс Игрока
public:
	float x, y, dx, dy;
	std::string File;
	sf::Image image;
	sf::Texture texture;
	sf::Sprite sprite;
	Player(std::string F, float X, float Y) {
		File = F;
		image.loadFromFile("images/" + File);
		texture.loadFromImage(image);
		sprite.setTexture(texture);
		x = X; y = Y;
	}
};
int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "*Drawing*", sf::Style::Fullscreen);
	sf::Clock clock;
	bool isMove = false;
	bool erase = false;
	float dX = 0;
	float dY = 0;
	float fX = 0;
	float fY = 0;
	bool start = 1;
	int razmer = 11;
	static bool is_Key_pressed = false;
	static bool is_Key_pressed1 = false;
	sf::Font font;
	font.loadFromFile("CyrilicOld");
	sf::Text text("", font, 500);
	text.setOutlineColor(sf::Color::Blue);
	text.setFillColor(sf::Color::Red);
	text.setStyle(sf::Text::Bold | sf::Text::Underlined);
	Player y("eraser1.png", 10, 825);
	Player p("circle.png", 10, 10);
	Player p1("circle1.png", 10, 10);
	Player p2("circle2.png", 10, 10);
	Player p3("circle3.png", 10, 10);
	Player p4("circle4.png", 10, 10);
	Player p5("circle5.png", 10, 10);
	Player p6("circle6.png", 10, 10);
	Player p7("circle7.png", 10, 10);
	Player p8("circle8.png", 10, 10);
	Player p9("circle9.png", 10, 10);
	Player p10("circle10.png", 10, 10);
	Player Temp("circle.png", 10, 10);
	while (window.isOpen())
	{
		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time / 800;
		sf::Vector2i Pos1 = sf::Mouse::getPosition(window);
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Numpad1 && !is_Key_pressed)
				{
					is_Key_pressed = true;
					if (razmer < 11)
						++razmer;
					else
						razmer = 1;
				}
			}
			else if (event.type == sf::Event::KeyReleased)
			{
				if (event.key.code == sf::Keyboard::Numpad1 && is_Key_pressed)
				{
					is_Key_pressed = false;
				}
			}
			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Numpad2 && !is_Key_pressed1)
				{
					is_Key_pressed1 = true;
					if (razmer > 1)
						--razmer;
					else
						razmer = 11;
				}
			}
			else if (event.type == sf::Event::KeyReleased)
			{
				if (event.key.code == sf::Keyboard::Numpad2 && is_Key_pressed1)
				{
					is_Key_pressed1 = false;
				}
			}
			if (start == 0)
				window.clear();
			else
			{
				if (razmer == 1)
				{
					p = p10;
				}
				if (razmer == 2)
				{
					p = p9;
				}
				if (razmer == 3)
				{
					p = p8;
				}
				if (razmer == 4)
				{
					p = p7;
				}
				if (razmer == 5)
				{
					p = p6;
				}
				if (razmer == 6)
				{
					p = p5;
				}
				if (razmer == 7)
				{
					p = p4;
				}
				if (razmer == 8)
				{
					p = p3;
				}
				if (razmer == 9)
				{
					p = p2;
				}
				if (razmer == 10)
				{
					p = p1;
				}
				if (razmer == 11)
				{
					p = Temp;
				}
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
			{
				p.sprite.setColor(sf::Color::Cyan);
				p1.sprite.setColor(sf::Color::Cyan);
				p2.sprite.setColor(sf::Color::Cyan);
				p3.sprite.setColor(sf::Color::Cyan);
				p4.sprite.setColor(sf::Color::Cyan);
				p5.sprite.setColor(sf::Color::Cyan);
				p6.sprite.setColor(sf::Color::Cyan);
				p7.sprite.setColor(sf::Color::Cyan);
				p8.sprite.setColor(sf::Color::Cyan);
				p9.sprite.setColor(sf::Color::Cyan);
				p10.sprite.setColor(sf::Color::Cyan);
				Temp.sprite.setColor(sf::Color::Cyan);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
			{
				p.sprite.setColor(sf::Color::Magenta);
				p1.sprite.setColor(sf::Color::Magenta);
				p2.sprite.setColor(sf::Color::Magenta);
				p3.sprite.setColor(sf::Color::Magenta);
				p4.sprite.setColor(sf::Color::Magenta);
				p5.sprite.setColor(sf::Color::Magenta);
				p6.sprite.setColor(sf::Color::Magenta);
				p7.sprite.setColor(sf::Color::Magenta);
				p8.sprite.setColor(sf::Color::Magenta);
				p9.sprite.setColor(sf::Color::Magenta);
				p10.sprite.setColor(sf::Color::Magenta);
				Temp.sprite.setColor(sf::Color::Magenta);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
			{
				p.sprite.setColor(sf::Color::Green);
				p1.sprite.setColor(sf::Color::Green);
				p2.sprite.setColor(sf::Color::Green);
				p3.sprite.setColor(sf::Color::Green);
				p4.sprite.setColor(sf::Color::Green);
				p5.sprite.setColor(sf::Color::Green);
				p6.sprite.setColor(sf::Color::Green);
				p7.sprite.setColor(sf::Color::Green);
				p8.sprite.setColor(sf::Color::Green);
				p9.sprite.setColor(sf::Color::Green);
				p10.sprite.setColor(sf::Color::Green);
				Temp.sprite.setColor(sf::Color::Green);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
			{
				p.sprite.setColor(sf::Color::Blue);
				p1.sprite.setColor(sf::Color::Blue);
				p2.sprite.setColor(sf::Color::Blue);
				p3.sprite.setColor(sf::Color::Blue);
				p4.sprite.setColor(sf::Color::Blue);
				p5.sprite.setColor(sf::Color::Blue);
				p6.sprite.setColor(sf::Color::Blue);
				p7.sprite.setColor(sf::Color::Blue);
				p8.sprite.setColor(sf::Color::Blue);
				p9.sprite.setColor(sf::Color::Blue);
				p10.sprite.setColor(sf::Color::Blue);
				Temp.sprite.setColor(sf::Color::Blue);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
			{
				p.sprite.setColor(sf::Color::Red);
				p1.sprite.setColor(sf::Color::Red);
				p2.sprite.setColor(sf::Color::Red);
				p3.sprite.setColor(sf::Color::Red);
				p4.sprite.setColor(sf::Color::Red);
				p5.sprite.setColor(sf::Color::Red);
				p6.sprite.setColor(sf::Color::Red);
				p7.sprite.setColor(sf::Color::Red);
				p8.sprite.setColor(sf::Color::Red);
				p9.sprite.setColor(sf::Color::Red);
				p10.sprite.setColor(sf::Color::Red);
				Temp.sprite.setColor(sf::Color::Red);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
			{
				p.sprite.setColor(sf::Color::Black);
				p1.sprite.setColor(sf::Color::Black);
				p2.sprite.setColor(sf::Color::Black);
				p3.sprite.setColor(sf::Color::Black);
				p4.sprite.setColor(sf::Color::Black);
				p5.sprite.setColor(sf::Color::Black);
				p6.sprite.setColor(sf::Color::Black);
				p7.sprite.setColor(sf::Color::Black);
				p8.sprite.setColor(sf::Color::Black);
				p9.sprite.setColor(sf::Color::Black);
				p10.sprite.setColor(sf::Color::Black);
				Temp.sprite.setColor(sf::Color::Black);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
			{
			p.sprite.setColor(sf::Color::White);
			p1.sprite.setColor(sf::Color::White);
			p2.sprite.setColor(sf::Color::White);
			p3.sprite.setColor(sf::Color::White);
			p4.sprite.setColor(sf::Color::White);
			p5.sprite.setColor(sf::Color::White);
			p6.sprite.setColor(sf::Color::White);
			p7.sprite.setColor(sf::Color::White);
			p8.sprite.setColor(sf::Color::White);
			p9.sprite.setColor(sf::Color::White);
			p10.sprite.setColor(sf::Color::White);
			Temp.sprite.setColor(sf::Color::White);
		}
			if (event.type == sf::Event::MouseButtonPressed)
				if (event.key.code == sf::Mouse::Left)
					if (p.sprite.getGlobalBounds().contains(Pos1.x, Pos1.y))
					{
						dX = Pos1.x - p.sprite.getPosition().x;
						dY = Pos1.y - p.sprite.getPosition().y;
						isMove = true;
					}
					else
					{
						p.x = Pos1.x;
						p.y = Pos1.y;
						isMove = true;
					}
			if (event.key.code == sf::Mouse::Right)
				 if (y.sprite.getGlobalBounds().contains(Pos1.x, Pos1.y))
						erase = true;
			if (erase == 1)
			{
				window.clear();
				start = 0;
			}
			else
				start = 1;
			if (event.type == sf::Event::MouseButtonReleased)
				if (event.key.code == sf::Mouse::Left)
					isMove = false;
			if (event.type == sf::Event::MouseButtonReleased)
				if (event.key.code == sf::Mouse::Right )
					erase = false;
			if (isMove == 1)
			{
				p.x = Pos1.x - dX;
				p.y = Pos1.y - dY;
			}
		}
		p.sprite.setPosition(p.x, p.y);
		y.sprite.setPosition(y.x, y.y);
		if(isMove == 1)
		window.draw(p.sprite);
		window.draw(y.sprite);
		window.display();
		
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			window.close();
	}
	return 0;
}
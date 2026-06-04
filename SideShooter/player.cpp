#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <allegro5\allegro_image.h>
#include "player.h"


player::~player()
{
	for (int i = 0; i < 5; i++)
	{
		al_destroy_bitmap(image[i]);
	}
}
player::player(int HEIGHT)
{
	// Load Kirby images for each life state.
	image[0] = al_load_bitmap("kirby4.png"); // 1 lives, lowest health
	image[1] = al_load_bitmap("kirby3.png"); // 2 lives
	image[2] = al_load_bitmap("kirby2.png"); // 3 lives
	image[3] = al_load_bitmap("kirby1.png"); // 4 lives
	image[4] = al_load_bitmap("kirby0.png"); // 5 life, full health

	for (int i = 0; i < 5; i++)
	{
		if (!image[i])
		{
			exit(1);
		}
	}
	x = 20;
	y = HEIGHT / 2;
	lives = 5;
	speed = 7;
	boundx = al_get_bitmap_width(image[4]);
	boundy = al_get_bitmap_height(image[4]);
	score = 0;
}
void player::DrawPlayer()
{
	if (lives > 0)
	{
		al_draw_bitmap(image[lives - 1], x, y, 0);
	}
}void player::MoveUp()
{
	y -= speed;
	if(y < 0)
		y = 0;
}
void player::MoveDown(int HEIGHT)
{
	y += speed;
	if(y > HEIGHT - boundy)
		y = HEIGHT - boundy;
}
void player::MoveLeft()
{
	x -= speed;
	if(x < 0)
		x = 0;
}
void player::MoveRight()
{
	x += speed;
	if(x > 300)
		x = 300;
}
void player::removeLife()
{
	if (lives > 0)
	{
		lives--;
	}
}
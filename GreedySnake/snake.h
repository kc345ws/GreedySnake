#pragma once
#ifndef SNAKE_H

#define SNAKE_H



#include <deque>

#include "point.h"

#include "food.h"



class Food;

class Snake

{

public:

	enum Direction { UP, DOWN, LEFT, RIGHT };//方向



	Snake() {

		snake.emplace_back(14, 8); //蛇出生位置

		snake.emplace_back(15, 8);

		snake.emplace_back(16, 8);

		direction = Direction::DOWN; //蛇出生移动方向

	}

	void InitSnake();

	void Move();

	void NormalMove();

	bool OverEdge();

	bool HitItself();

	bool ChangeDirection();

	bool GetFood(const Food&);

	bool GetBigFood(Food&);

private:

	std::deque<Point> snake;//蛇的容器

	Direction direction;

	friend class Food;//将Food类置为友元，以便访问其私有元素

};

#endif // SNAKE_H
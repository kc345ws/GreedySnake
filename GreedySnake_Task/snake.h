#pragma once
#ifndef SNAKE_H
#define SNAKE_H
#include"point.h"
#include<deque>
#include"food.h"
using namespace std;

class Food;

class Snake
{
public:
//必须写在函数里
	enum Direction { UP, DOWN, LEFT, RIGHT };//蛇移动的类型

	Snake();
	
	void PrintfSnake();//绘制蛇

	void MoveMethod();//蛇移动方式

	void ChangeSnakeDirection();//改变蛇的方向

	void Moveing();//蛇移动

	void HitMap();//碰撞到地图边界

	bool GetFood(Food* cfood);//蛇吃到食物

	void HitSnake();//碰撞到蛇自身

	/*void PrintfBlank();*/

private:
	deque<Point> snake;//蛇身容器

	Direction direction;//蛇的方向

	friend class Food;
};

#endif

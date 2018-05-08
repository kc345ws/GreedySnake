#pragma once
#ifndef FOOD_H
#define FOOD_H
#include"snake.h"
#include<iostream>
using namespace std;

class Food
{
public:
	void PrintfFood();

	Food() 
	{

	}
private:

	int x, y;//Ê³Îï×ø±ê

	friend class Snake;
};
#endif
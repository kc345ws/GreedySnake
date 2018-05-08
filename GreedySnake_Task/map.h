#pragma once
#ifndef MAP_H
#define MAP_h
#include"point.h"
#include<deque>
using namespace std;

class Map
{
public:
	Map();
	
	void PrintfMap();

private:
	deque<Point> map1;
};


#endif
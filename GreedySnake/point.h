#pragma once
#ifndef POINT_H

#define POINT_H



class Point

{

public:

	Point() 
	{

	}

	Point(const int x, const int y) : x(x), y(y) 
	{
	
	}

	void Print(); //输出■

	void PrintCircular(); //输出●

	void Clear(); //清除输出

	void ChangePosition(const int x, const int y);//改变坐标

	bool operator== (const Point& point) //运算符重载
	{ 
		return (point.x == this->x) && (point.y == this->y); 
	}

	int GetX() 
	{ 
		return this->x; 
	}

	int GetY() 
	{ 
		return this->y;
	}

private:

	int x, y;

};

#endif // POINT_H
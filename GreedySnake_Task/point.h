#pragma once
#ifndef POINT_H
#define POINT_H

class Point
{
public:

	/*Point()
	{

	}*/

	//Point(const int x, const int y) : x(x), y(y)
	//{

	//}
	Point();

	Point(int x, int y);

	int operator== (const Point& point) //运算符重载
	{
		return (point.x == this->x) && (point.y == this->y);
	}
		
	void GetPoint(const int x, const int y);

	void PrintfSquare();//打印正方形

	void PrintfCircular();//打印圆

	void PrintfBlank();//打印空白

	int GetX();//获得该点坐标的X值

	int GetY();//获得该点坐标的Y值

	//void PrintfGameOver();//打印游戏结束
	/*void ChangePoint(const int x, const int y)
	{
		this->x = x;
		this->y = y;
	}*/


	friend class Snake;

private:

	int x, y;

	
};
#endif

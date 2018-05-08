#include"map.h"
#include"point.h"
#include<iostream>
#include<conio.h>
#include<windows.h>
#include"windows.h"
using namespace std;

Map::Map()
{
	map1.emplace_back(1, 1);
	map1.emplace_back(1, 2);
	map1.emplace_back(1, 3);
	map1.emplace_back(1, 4);
	map1.emplace_back(1, 5);
	map1.emplace_back(1, 6);
	map1.emplace_back(1, 7);
	map1.emplace_back(1, 8);
	map1.emplace_back(1, 9);
	map1.emplace_back(1, 10);
	map1.emplace_back(1, 11);
	map1.emplace_back(1, 12);
	map1.emplace_back(1, 13);
	map1.emplace_back(1, 14);
	map1.emplace_back(1, 15);
	map1.emplace_back(1, 16);
	map1.emplace_back(1, 17);
	map1.emplace_back(1, 18);
	map1.emplace_back(1, 19);
	map1.emplace_back(1, 20);
	map1.emplace_back(1, 21);
	map1.emplace_back(1, 22);
	map1.emplace_back(1, 23);
	map1.emplace_back(1, 24);
	map1.emplace_back(1, 25);
	map1.emplace_back(1, 26);
	map1.emplace_back(1, 27);
	map1.emplace_back(1, 28);
	map1.emplace_back(1, 29);
	map1.emplace_back(1, 30);//左边界

	map1.emplace_back(2, 30);
	map1.emplace_back(3, 30);
	map1.emplace_back(4, 30);
	map1.emplace_back(5, 30);
	map1.emplace_back(6, 30);
	map1.emplace_back(7, 30);
	map1.emplace_back(8, 30);
	map1.emplace_back(9, 30);
	map1.emplace_back(10, 30);
	map1.emplace_back(11, 30);
	map1.emplace_back(12, 30);
	map1.emplace_back(13, 30);
	map1.emplace_back(14, 30);
	map1.emplace_back(15, 30);
	map1.emplace_back(16, 30);
	map1.emplace_back(17, 30);
	map1.emplace_back(18, 30);
	map1.emplace_back(19, 30);
	map1.emplace_back(20, 30);
	map1.emplace_back(21, 30);
	map1.emplace_back(22, 30);
	map1.emplace_back(23, 30);
	map1.emplace_back(24, 30);
	map1.emplace_back(25, 30);
	map1.emplace_back(26, 30);
	map1.emplace_back(27, 30);
	map1.emplace_back(28, 30);
	map1.emplace_back(29, 30);
	map1.emplace_back(30, 30);//下边界

	map1.emplace_back(30, 29);
	map1.emplace_back(30, 28);
	map1.emplace_back(30, 27);
	map1.emplace_back(30, 26);
	map1.emplace_back(30, 25);
	map1.emplace_back(30, 24);
	map1.emplace_back(30, 23);
	map1.emplace_back(30, 22);
	map1.emplace_back(30, 21);
	map1.emplace_back(30, 20);
	map1.emplace_back(30, 19);
	map1.emplace_back(30, 18);
	map1.emplace_back(30, 17);
	map1.emplace_back(30, 16);
	map1.emplace_back(30, 15);
	map1.emplace_back(30, 14);
	map1.emplace_back(30, 13);
	map1.emplace_back(30, 12);
	map1.emplace_back(30, 11);
	map1.emplace_back(30, 10);
	map1.emplace_back(30, 9);
	map1.emplace_back(30, 8);
	map1.emplace_back(30, 7);
	map1.emplace_back(30, 6);
	map1.emplace_back(30, 5);
	map1.emplace_back(30, 4);
	map1.emplace_back(30, 3);
	map1.emplace_back(30, 2);
	map1.emplace_back(30, 1);//右边界

	map1.emplace_back(29, 1);
	map1.emplace_back(28, 1);
	map1.emplace_back(27, 1);
	map1.emplace_back(26, 1);
	map1.emplace_back(25, 1);
	map1.emplace_back(24, 1);
	map1.emplace_back(23, 1);
	map1.emplace_back(22, 1);
	map1.emplace_back(21, 1);
	map1.emplace_back(20, 1);
	map1.emplace_back(19, 1);
	map1.emplace_back(18, 1);
	map1.emplace_back(17, 1);
	map1.emplace_back(16, 1);
	map1.emplace_back(15, 1);
	map1.emplace_back(14, 1);
	map1.emplace_back(13, 1);
	map1.emplace_back(12, 1);
	map1.emplace_back(11, 1);
	map1.emplace_back(10, 1);
	map1.emplace_back(9, 1);
	map1.emplace_back(8, 1);
	map1.emplace_back(7, 1);
	map1.emplace_back(6, 1);
	map1.emplace_back(5, 1);
	map1.emplace_back(4, 1);
	map1.emplace_back(3, 1);
	map1.emplace_back(2, 1);
	map1.emplace_back(1, 1);//上边界

}

void Map::PrintfMap()
{
	deque<Point>::iterator iter = map1.begin();

	for (iter; iter != map1.end(); iter++)
	{
		SettxtColor(4);
		iter->Point::PrintfSquare();
		Sleep(10);
	}
}
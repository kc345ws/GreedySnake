#pragma once
#include "food.h"

#include "tools.h"

#include <cstdlib>

#include <iostream>





void Food::DrawFood(Snake& csnake)//绘制食物

{

	/*利用rand函数获得坐标，并将其范围限制在2-29内，即在地图内，如果获得的坐标与蛇身重叠，则重新获取。

	同时每5颗食物就出现一颗限时食物*/

	while (true)

	{

		int tmp_x = rand() % 30; //将食物范围限制在2-29内(地图大小)

		int tmp_y = rand() % 30;

		if (tmp_x < 2) 
			tmp_x += 2;

		if (tmp_y < 2) 
			tmp_y += 2;

		bool flag = false;

		for (auto& point : csnake.snake)

		{

			if ((point.GetX() == tmp_x && point.GetY() == tmp_y) || (tmp_x == big_x && tmp_y == big_y)) {
				//判断食物位置与蛇是否重合
				flag = true;

				break;

			}

		}

		if (flag)

			continue;

		Food::x = tmp_x;

		Food::y = tmp_y;

		SetCursorPosition(x, y);//设置光标位置

		SetColor(13);

		std::cout << "★";

		++cnt;//判断吃到食物个数

		cnt %= 5;

		if (cnt == 0)

		{

			DrawBigFood(csnake);

		}

		break;

	}

}



void Food::DrawBigFood(Snake& csnake)//绘制限时食物

{

	SetCursorPosition(5, 0);//在此处打印进度条

	SetColor(13);//设置进度条的颜色

	std::cout  <<"------------------------------------------"<<"<-限时食物进度条消失";//进度条

	progress_bar = 42;//进度条大小

	while (true)

	{

		int tmp_x = rand() % 30;

		int tmp_y = rand() % 30;

		if (tmp_x < 2) tmp_x += 2;

		if (tmp_y < 2) tmp_y += 2;

		bool flag = false;

		for (auto& point : csnake.snake)

		{

			if ((point.GetX() == tmp_x && point.GetY() == tmp_y) || (tmp_x == x && tmp_y == y))
				//判断蛇身与食物重合
			{

				flag = true;

				break;

			}

		}

		if (flag)

			continue;



		big_x = tmp_x;

		big_y = tmp_y;

		SetCursorPosition(big_x, big_y);//限时食物的坐标

		SetColor(18);//限时食物的颜色

		std::cout << "■";

		big_flag = true;

		flash_flag = true;

		break;

	}

}



int Food::GetCnt()//食物次数标记

{

	return cnt;

}



void Food::FlashBigFood()//闪烁限时食物

{

	SetCursorPosition(big_x, big_y);

	SetColor(18);

	if (Food::flash_flag)

	{

		std::cout << "  ";

		flash_flag = false;

	}

	else

	{

		std::cout << "■";

		flash_flag = true;

	}



	SetCursorPosition(26, 0);

	SetColor(13);

	for (int i = 42; i >= progress_bar; --i)//进度条缩短

		std::cout << "\b \b"; //输出退格键

	--progress_bar;

	if (progress_bar == 0) //限时食物消失
	{

		SetCursorPosition(big_x, big_y);

		std::cout << "  ";

		big_flag = false;//食物消失则将限时食物标记设为false

		big_x = 0;

		big_y = 0;

	}

}



bool Food::GetBigFlag()

{

	return Food::big_flag;//返回限时食物标记

}



int Food::GetProgressBar()

{

	return Food::progress_bar;//返回剩余进度条，用来更新游戏分数

}
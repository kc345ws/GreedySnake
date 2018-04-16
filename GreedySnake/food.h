#pragma once
#ifndef FOOD_H

#define FOOD_H



#include "snake.h"

class Snake;

class Food

{

public:

	Food() : cnt(0), flash_flag(false), big_flag(false), x(0), y(0), big_x(0), big_y(0), progress_bar(0) 
	{

	}

	void DrawFood(Snake&);

	void DrawBigFood(Snake&);

	int GetCnt();

	void FlashBigFood();

	bool GetBigFlag();

	int GetProgressBar();

private:

	int cnt; //�жϳԵ�ʳ�����

	bool flash_flag;//��˸���Ĭ��Ϊfalse

	bool big_flag;//�Ƿ�����ʱʳ����Ĭ��Ϊfalse

	int x, y;//Ĭ��Ϊ0

	int big_x, big_y;//Ĭ��Ϊ0

	int progress_bar;//��ʱʳ���������Ĭ��Ϊ0

	friend class Snake;

};

#endif // FOOD_H
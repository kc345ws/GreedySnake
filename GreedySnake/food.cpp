#pragma once
#include "food.h"

#include "tools.h"

#include <cstdlib>

#include <iostream>





void Food::DrawFood(Snake& csnake)//����ʳ��

{

	/*����rand����������꣬�����䷶Χ������2-29�ڣ����ڵ�ͼ�ڣ������õ������������ص��������»�ȡ��

	ͬʱÿ5��ʳ��ͳ���һ����ʱʳ��*/

	while (true)

	{

		int tmp_x = rand() % 30; //��ʳ�ﷶΧ������2-29��(��ͼ��С)

		int tmp_y = rand() % 30;

		if (tmp_x < 2) 
			tmp_x += 2;

		if (tmp_y < 2) 
			tmp_y += 2;

		bool flag = false;

		for (auto& point : csnake.snake)

		{

			if ((point.GetX() == tmp_x && point.GetY() == tmp_y) || (tmp_x == big_x && tmp_y == big_y)) {
				//�ж�ʳ��λ�������Ƿ��غ�
				flag = true;

				break;

			}

		}

		if (flag)

			continue;

		Food::x = tmp_x;

		Food::y = tmp_y;

		SetCursorPosition(x, y);//���ù��λ��

		SetColor(13);

		std::cout << "��";

		++cnt;//�жϳԵ�ʳ�����

		cnt %= 5;

		if (cnt == 0)

		{

			DrawBigFood(csnake);

		}

		break;

	}

}



void Food::DrawBigFood(Snake& csnake)//������ʱʳ��

{

	SetCursorPosition(5, 0);//�ڴ˴���ӡ������

	SetColor(13);//���ý���������ɫ

	std::cout  <<"------------------------------------------"<<"<-��ʱʳ���������ʧ";//������

	progress_bar = 42;//��������С

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
				//�ж�������ʳ���غ�
			{

				flag = true;

				break;

			}

		}

		if (flag)

			continue;



		big_x = tmp_x;

		big_y = tmp_y;

		SetCursorPosition(big_x, big_y);//��ʱʳ�������

		SetColor(18);//��ʱʳ�����ɫ

		std::cout << "��";

		big_flag = true;

		flash_flag = true;

		break;

	}

}



int Food::GetCnt()//ʳ��������

{

	return cnt;

}



void Food::FlashBigFood()//��˸��ʱʳ��

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

		std::cout << "��";

		flash_flag = true;

	}



	SetCursorPosition(26, 0);

	SetColor(13);

	for (int i = 42; i >= progress_bar; --i)//����������

		std::cout << "\b \b"; //����˸��

	--progress_bar;

	if (progress_bar == 0) //��ʱʳ����ʧ
	{

		SetCursorPosition(big_x, big_y);

		std::cout << "  ";

		big_flag = false;//ʳ����ʧ����ʱʳ������Ϊfalse

		big_x = 0;

		big_y = 0;

	}

}



bool Food::GetBigFlag()

{

	return Food::big_flag;//������ʱʳ����

}



int Food::GetProgressBar()

{

	return Food::progress_bar;//����ʣ�������������������Ϸ����

}
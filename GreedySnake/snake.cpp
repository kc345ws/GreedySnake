#include "snake.h"

#include <conio.h>

#include "tools.h"

#include<iostream>



void Snake::InitSnake()//��ʼ����

{

	for (auto& point : snake)

	{

		point.PrintCircular();//���Բ��

	}

}



void Snake::Move()//������

{

	switch (direction)

	{

	case Direction::UP:

		snake.emplace_back(Point(snake.back().GetX(), snake.back().GetY() - 1));

		break;

	case Direction::DOWN:

		snake.emplace_back(Point(snake.back().GetX(), snake.back().GetY() + 1));

		break;

	case Direction::LEFT:

		snake.emplace_back(Point(snake.back().GetX() - 1, snake.back().GetY()));

		break;

	case Direction::RIGHT:

		snake.emplace_back(Point(snake.back().GetX() + 1, snake.back().GetY()));

		break;

	default:

		break;

	}

	SetColor(14);

	snake.back().PrintCircular();

}



void Snake::NormalMove()//�������ƶ���ͷ������β����

{

	Move();

	snake.front().Clear();

	snake.pop_front();

}



bool Snake::OverEdge()//�����߽�

{

	return snake.back().GetX() < 30 &&

		snake.back().GetY() < 30 &&

		snake.back().GetX() > 1 &&

		snake.back().GetY() > 1;

}



bool Snake::HitItself()//ײ������

{

	std::deque<Point>::size_type cnt = 1;

	Point *head = new Point(snake.back().GetX(), snake.back().GetY());//���ͷ������

	for (auto& point : Snake::snake) //���������������ͷ����ͬ�����겻�����߳�������ζ����ͷ��ײ������

	{
		//��ͷ�����������غ�
		if (!(point == *head))

			++cnt;

		else

			break;

	}

	delete head;

	if (cnt == snake.size())

		return true;

	else

		return false;

}



bool Snake::ChangeDirection()//�ı��ߵķ���

{

	char ch;

	if (kbhit())//kbhit��������ֵΪ��������ע��

	{

		ch = getch();

		switch (ch)

		{

		case -32:

			ch = getch();

			switch (ch)

			{

			case 72://�ϼ���assic

				if (direction != Direction::DOWN)//��������뵱ǰ�˶������෴����Ч

					direction = Direction::UP;

				break;

			case 80://�¼���assic

				if (direction != Direction::UP)

					direction = Direction::DOWN;

				break;

			case 75://�����assic

				if (direction != Direction::RIGHT)

					direction = Direction::LEFT;

				break;

			case 77://�Ҽ���assic

				if (direction != Direction::LEFT)

					direction = Direction::RIGHT;

				break;

			default:

				break;

			}

			return true;



		case 27://ESC assic�˵�

			return false;



		default:

			return true;


		}

	}

	return true;

}



bool Snake::GetFood(const Food& cfood)//�߳Ե�ʳ��

{

	if (Snake::snake.back().GetX() == cfood.x && Snake::snake.back().GetY() == cfood.y)
		//��ͷ��������β��
		return true;

	else

		return false;

}



bool Snake::GetBigFood(Food& cfood)//�߳Ե���ʱʳ��

{

	if (snake.back().GetX() == cfood.big_x && snake.back().GetY() == cfood.big_y)

	{

		cfood.big_flag = false;

		cfood.big_x = 0;

		cfood.big_y = 0;

		SetCursorPosition(1, 0);

		std::cout << "                                                            ";

		return true;

	}

	else

		return false;

}
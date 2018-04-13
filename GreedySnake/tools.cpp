#include "tools.h"

#include <windows.h>

#include <stdio.h>



void SetWindowSize(int cols, int lines)//���ô��ڴ�С

{

	system("̰����--���ִ�ѧ");//���ô��ڱ���

	char cmd[30];

	sprintf(cmd, "mode con cols=%d lines=%d", cols * 2, lines);//һ��ͼ��ռ�����ַ����ʿ�ȳ���2

	system(cmd);//system(mode con cols=88 lines=88)���ô��ڿ�Ⱥ͸߶�

}



void SetCursorPosition(const int x, const int y)//���ù��λ��

{

	COORD position;  //��ʾһ���ַ��ڿ���̨��Ļ�ϵ�����

	position.X = x * 2;

	position.Y = y ;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

}



void SetColor(int colorID)//�����ı���ɫ

{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorID);

}



void SetBackColor()//�����ı�����ɫ

{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),

		FOREGROUND_BLUE |

		BACKGROUND_BLUE |

		BACKGROUND_GREEN |

		BACKGROUND_RED);

}
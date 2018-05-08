#include<iostream>
#include"snake.h"
#include"point.h"
#include <windows.h>
#include "windows.h"
#include<conio.h>
#include"map.h"
#include"food.h"
#include<time.h>
using namespace std;
Snake *csnake = new Snake();
Map *cmap = new Map();
Food *cfood = new Food();

int main()
{

	SetConsoleTitle("Ì°³ÔÉß");
	SetWindowSize(41, 36);
	srand((unsigned int)time(0));
	int colorID = rand() % 10;
	if (colorID == 0)
		++colorID;
	//Food &cfood1 = cfood;
	cmap->PrintfMap();



	cfood->PrintfFood();

	AddMarks(csnake, cfood);
	while (1)
	{
		
		/*csnake->GetFood(cfood);*/
		csnake->ChangeSnakeDirection();
		
		if(csnake->GetFood(cfood) == true)
		{
			
			cfood->PrintfFood();
			
			AddMarks(csnake, cfood);
			
		}
		/*csnake->PrintfSnake();*/
		
		
		csnake->Moveing() ;
		Sleep(100);
		csnake->HitMap();
		csnake->HitSnake();
	}
	
	return 0;
}
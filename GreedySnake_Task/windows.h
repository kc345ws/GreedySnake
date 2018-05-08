#pragma once
#ifndef WINDOWS_H
#define WINDOWS_H
#include"snake.h"
#include"food.h"

class Food;
class Snake;

void SetWindowSize(int cols, int lines);

//void Menu();
//
//void GameOver();
void AddMarks(Snake* csnake, Food *cfood);

void GetPoint(const int x, const int y);

void SettxtColor(int colorID);
#endif
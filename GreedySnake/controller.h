#pragma once
#ifndef CONTROLLER_H

#define CONTROLLER_H





class Controller

{

public:

	Controller() : speed(200), key(1), score(0) 
	{

	}

	void Start();

	void Select();

	void DrawGame();

	int PlayGame();

	void UpdateScore(const int&);

	void RewriteScore();

	int Menu();

	void Game();

	int GameOver();

private:

	int speed;//默认为200

	int key;//默认为1

	int score;//默认为0

};

#endif // CONTROLLER_H
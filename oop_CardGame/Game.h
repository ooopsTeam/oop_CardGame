#pragma once
class Game
{
private:
	int playerNum;  // �������

public:
	Game(int playerNum); 
};

Game::Game(int playerNum) : playerNum(playerNum) {};

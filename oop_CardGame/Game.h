#pragma once
class Game
{
private:
	int playerNum;  // Íæ¼ÒÈËÊı

public:
	Game(int playerNum); 
};

Game::Game(int playerNum) : playerNum(playerNum) {};

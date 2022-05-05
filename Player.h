#pragma once
#include "Header.h"
#include "Field.h"

class Player {
private:
	int xCoord;
	int yCoord;
	int fruitCount;
public:
	Player();
	//Player(int initXcoord, int initYcoord);
	//~Player();

	void go(char way, Field &field);

	int getXcoord();
	void setXcoord(int initXcoord);
	int getYcoord();
	void setYcoord(int initYcoord);
	int getFruitCount();
	void setFruitCount(int initFruitCount);
	void collectFruit(Field& field, int xCoord, int yCoord);
};

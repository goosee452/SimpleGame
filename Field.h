#pragma once
#include "Header.h"

class Field {
private:
	int length;
	int width;
	int fruitCount;
	bool** field;
public:
	Field();
	//Field(int initLength, int initWidth, int initFruitCount);
	~Field();

	int getLength();
	void setLength(int initLength);
	int getWidth();
	void setWidth(int initWidth);
	int getFruitCount();
	void setFruitCount(int initFruitCount);
	bool getCell(int xCoord, int yCoord);
	void setCell(int xCoord, int yCoord, bool initCell);

	void setFruitPos();
};
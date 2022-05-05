#include "Field.h"


#define MIN_LENGTH 10
#define MIN_WIDTH 10
#define MIN_FRUIT_QUANT 5

Field::Field() {
	srand(time(0));
	length = rand() % 11 + MIN_LENGTH;
	width = rand() % 11 + MIN_WIDTH;
	fruitCount = (rand() % 6) + MIN_FRUIT_QUANT;

	field = new bool*[width];
	for (int count = 0; count < width; count++) {
		field[count] = new bool[length];
	}

	for (int y = 0; y < width; y++) {
		for (int x = 0; x < length; x++) {
			field[y][x] = 0;
		}
	}
}

Field::~Field() {
	for (int count = 0; count < width; count++) {
		delete[] field[count];
	}
	delete[]field;
}

int Field::getLength() {
	return length;
}

void Field::setLength(int initLength) {
	length = initLength;
}

int Field::getWidth() {
	return width;
}
void Field::setWidth(int initWidth) {
	width = initWidth;
}
int Field::getFruitCount(){
	return fruitCount;
}
void Field::setFruitCount(int initFruitCount) {
	fruitCount = initFruitCount;
}

bool Field::getCell(int xCoord, int yCoord) {
	return field[yCoord][xCoord];
}

void Field::setCell(int xCoord, int yCoord, bool initCell) {
	field[yCoord][xCoord] = initCell;
}

void Field::setFruitPos() {
	srand(time(NULL));

	int randX;
	int randY;

	for (int count = 0; count < fruitCount; count++){
		randX = rand() % length;
		randY = rand() % width;
 		
		if (field[randY][randX] == 0) {
			field[randY][randX] = 1;
		}
		else {
			count--;
		}
	}
}
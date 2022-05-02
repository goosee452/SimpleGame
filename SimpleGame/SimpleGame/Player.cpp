#include "Player.h"

Player::Player() {
	xCoord = 0;
	yCoord = 0;
	fruitCount = 0;
}


void Player::go(char way, Field &field) {
	//ways: u = up, l = left, r = right, d = down
	switch (way) {
	case 'u':
		if (yCoord > 0) {
			yCoord--;
		}
		break;
	case 'l': 
		if (xCoord > 0) {
			xCoord--;
		}
		break;
	case 'r':
		if (xCoord < field.getLength() - 1) {
			xCoord++;
		}
		break;
	case 'd':
		if (yCoord < field.getWidth() - 1) {
			yCoord++;
		}
		break;
	}
}


int Player::getXcoord() {
	return xCoord;
}
void Player::setXcoord(int initXcoord) {
	xCoord = initXcoord;
}
int Player::getYcoord() {
	return yCoord;
}
void Player::setYcoord(int initYcoord) {
	yCoord = initYcoord;
}
int Player::getFruitCount() {
	return fruitCount;
}
void Player::setFruitCount(int initFruitCount) {
	fruitCount = initFruitCount;
}
void Player::collectFruit(Field &field, int xCoord, int yCoord) {

	fruitCount++;
	field.setCell(xCoord, yCoord, 0);

}
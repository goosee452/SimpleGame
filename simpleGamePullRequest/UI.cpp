#include "UI.h"


string startScreen() {
	return "___________\nSIMPLE GAME\n___________\n\n\n\nRules: press arrows to move;\n u need to collect all the fruit('*')\n\n";
}

string outField(Field& field, Player& player) {
	string out = "";

	for (int y = 0; y < field.getWidth(); y++) {
		for (int x = 0; x < field.getLength(); x++) {
			if (x == player.getXcoord() && y == player.getYcoord()) {
				out += "P  ";
			}
			else {
				switch (field.getCell(x, y)) {
				case 0:
					out += "_  ";
					break;
				case 1:
					out += "*  ";
					break;
				}
			}
		}
		out += "\n";
	}

	return out;
}

char setWay() {

	const int ARRAY_UP = 72;
	const int ARRAY_DOWN = 80;
	const int ARRAY_RIGHT = 77;
	const int ARRAY_LEFT = 75;

	bool waySet = 0;
	char way = 'u';
	while (waySet == 0) {

		int keyCode = _getch();
	
		switch (keyCode) {
		case ARRAY_UP:
			way = 'u';
			waySet = 1;
			break;
		case ARRAY_DOWN:
			way = 'd';
			waySet = 1;
			break;
		case ARRAY_RIGHT:
			way = 'r';
			waySet = 1;
			break;
		case ARRAY_LEFT:
			way = 'l';
			waySet = 1;
			break;
		}
	}
	return way;
}
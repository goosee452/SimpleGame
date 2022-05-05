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

#define ARRAY_UP 72
#define ARRAY_DOWN 80
#define ARRAY_RIGHT 77
#define ARRAY_LEFT 75

char setWay() {

	bool wayIsSet = false;
	char way = 'u';
	while (wayIsSet == false) {

		int keyCode = _getch();
	
		switch (keyCode) {
		case ARRAY_UP:
			way = 'u';
			wayIsSet = true;
			break;
		case ARRAY_DOWN:
			way = 'd';
			wayIsSet = true;
			break;
		case ARRAY_RIGHT:
			way = 'r';
			wayIsSet = true;
			break;
		case ARRAY_LEFT:
			way = 'l';
			wayIsSet = true;
			break;
		}
	}
	return way;
}
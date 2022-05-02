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
	char a;
	cin >> a;
	return a;
}
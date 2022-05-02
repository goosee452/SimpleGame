#include "Field.h"
#include "Player.h"
#include "UI.h"


int main() {

	cout << startScreen();
	system("pause");
	system("cls");

	Player player;
	Field field;
	cout << field.getFruitCount() << "\n\n\n";
	field.setFruitPos();
	char way;

	while (player.getFruitCount() < field.getFruitCount()) {

		cout << outField(field, player);
		if (field.getCell(player.getXcoord(), player.getYcoord()) == 1) {
			player.collectFruit(field, player.getXcoord(), player.getYcoord());
		}
		way = setWay();
		player.go(way, field);
		system("cls");

	}

	cout << "Congratulacions! U won the game!";


	return 0;
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
double battle(int defense, int attack);
void monster();
int health = 100;
int a, d;

int main() {
	ifstream inFile;
	string inventory[4];
	char input;
	int SavedRoom;
	inFile.open("save.txt");
	inFile >> SavedRoom;
	inFile.close();
	cout << "would you like to load your data?" << endl;
	cin >> input;
	int room = 1;//starting room
	if (input == 'y')
		room = SavedRoom;
	while (health>0) {
		switch (room) {

		case 1:
			cout << "you're in your house" << endl;
			cout << "you can go south, east, and north" << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			else if (input == 'e')
				if (inventory[3] == "key1")
					room = 7;
				else
					cout << "this door is locked" << endl;
			else if (input == 'n')
				if (inventory[2] == "key2")
					room = 8;
				else
					cout << "this door is locked" << endl;
			break;
		case 2:
			cout << "you're in forest" << endl;
			cout << "you can go north or west" << endl;
			cin >> input;
			if (input == 'n')
				room = 1;
			else if (input == 'w')
				room = 3;
			break;
		case 3:
			cout << "you're in the deeper part of the forest" << endl;
			cout << "you can go south or east" << endl;
			cin >> input;
			if (input == 'e')
				room = 2;
			else if (input == 's')
				room = 4;
			break;
		case 4:
			cout << "you're in the edge of the forest" << endl;
			cout << "you can go north or south" << endl;
			cin >> input;
			if (input == 'n')
				room = 3;
			else if (input == 's')
				room = 5;
			break;
		case 5:
			cout << "you're at the montains" << endl;
			cout << "you can go north or east" << endl;
			cin >> input;
			if (input == 'n')
				room = 4;
			else if (input == 'e')
				room = 6;
			break;
		case 6:
			if (inventory[3] != "key1")
				cout << "you got key1" << endl;
			inventory[3] = "key1";
			cout << "you're in the basement" << endl;
			cout << "you can go west" << endl;
			cin >> input;
			if (input == 'w')
				room = 5;
			break;

		case 7:
			if (inventory[2] != "key2")
				cout << "you got key2" << endl;
			inventory[2] = "key2";
			cout << "your in kitchen" << endl;
			cout << "you can go west" << endl;
			cin >> input;
			if (input == 'w')
				room = 1;
			break;
		case 8:
			cout << "your health is now" << health << endl;
			cout << "enter defense and attack values" << endl;
			cin >> d; cin >> a;
			monster();
			cout << "your in the 2nd floor" << endl;
			cout << "you can go west, north, and south" << endl;
			cin >> input;
			if (input == 'n')
				room = 9;
			else if (input == 'w')
				if (inventory[1] == "key3")
					room = 10;
				else
					cout << "this door is locked" << endl;

			else if (input == 's')
				room = 1;
			break;
		case 9:
			if (inventory[1] != "key3")
				cout << "you got key3" << endl;
			inventory[1] = "key3";
			cout << "your in bathroom" << endl;
			cout << "you can go south" << endl;
			cin >> input;
			if (input == 's')
				room = 8;
			break;
		case 10:
			cout << "your health is now" << health << endl;
			cout << "enter defense and attack values" << endl;
			cin >> d; cin >> a;
			monster();
			cout << "your in the secret house" << endl;
			cout << "you can go east" << endl;
			cin >> input;
			if (input == 'e')
				room = 8;
			break;




		}//end switch
		cout << "you are in room " << room << endl;
		system("pause");
	}//end while
	cout << "you died nerd!" << endl;
	system("pause");

}
double battle(int defense, int attack) {
	cout << "BAM POW ZAM" << endl;
	int num = rand() % 20 + 1;
	num = num*attack - defense;
	return num;
}

void monster() {
	int num = rand() % 10 + 1;
	if (num < 3) {
		cout << "you got a miniture death coming towords you" << endl;
		health = health - battle(d, a);
	}
	else
		cout << "you got a potion, and more health" << endl;
	health += 15;

}
#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int main() {

	string bodyparts[6]={
		"head","arms","hand","feet","leg","toes"
	};

	string color[8]={
		"Yellow","Blue","Black","Green","Brown","red","purple","pink"
	};

	srand(time(NULL));

	int x = rand() % 7;
	int y = rand() % 5;

	while (1) {
		cout << color[x] << "" << bodyparts[y] << endl;
		system("pause");
	}

}
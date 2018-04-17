#include <iostream>
using namespace std;


int main() {

	int a = 0;
	int b = 1;
	int input;
	int thumb = 0;
	double fib;
	thumb = a + b;
	int carDoor = 0;

	cout << "give me a number" << endl;
	cin >> input;
	cout << endl;


	for (fib = 0; fib < input - 3; fib++) {

		a = b;
		b = thumb;
		thumb = a + b;
		//if (thumb % 2 == 0)
		//	carDoor += thumb;

		cout << thumb << endl;

	}
	system("pause");
}
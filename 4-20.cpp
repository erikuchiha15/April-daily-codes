#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	char letter;
	int numberOfLetters;

	ifstream myfile; //gets ready to open text file
	myfile.open("letters.txt"); //opens text file

	myfile >> numberOfLetters; //read in the first number from the file

	for (int i = 0; i < numberOfLetters; i++) { //read in all the chars
		myfile >> letter; //reads in the letter
		cout << letter; //print for testing

	}


	system("pause");

}
#include <iostream>
#include <vector>
#include<string>
using namespace std;

class Student {

private:
	int ID;
	string name;
	int age;
	char gender;

public:
	void initStudent(int numbers, int old, char gen, string lastN);
	void printinfo();

};

int main() {

	vector<Student>;

	Student S1;
	Student S2;
	Student S3;
	Student S4;

	S1.initStudent(660712, 16, 'f', "Williamsberg");
	S2.initStudent(698205, 15, 'm', "Robertson");
	S3.initStudent(665855, 14, 'f', "Willer");
	S4.initStudent(689366, 18, 'm', "Waterson");

	S1.printinfo();
	S2.printinfo();
	S3.printinfo();
	S4.printinfo();


}

void Student::initStudent(int numbers, int old, char gen, string lastN) {
	ID = numbers;
	name = lastN;
	age = old;
	gender = gen;
}
void Student::printinfo() {
	cout << "Your numbers are" << ID << endl;
	cout << "your last name is" << name << endl;
	cout << "your age is" << age << endl;
	cout << "your gender is" << gender << endl;

}
#include <iostream>
#include "Motorcycle.h"
using namespace std;

int main() {
	bool keepGoing = true;
	int option, uYear;
	string uColor, uMake, uModel;
	Motorcycle user;

	while (keepGoing == true) {
		cout << "1. Choose color" << endl << "2. Choose year" << endl << "3. Choose make" << endl << "4. Choose model" << endl << "5. Print motorcycle" << endl;
		cout << "What would you like to do? Enter an option number: ";

		cin >> option;

		

		switch (option) {
		case(1):
			cout << "What color would you like? ";
			cin >> uColor;
			user.setColor(uColor);
			break;
		case(2):
			cout << "What year do you want? ";
			cin >> uYear;
			user.setYear(uYear);
			break;
		case(3):
			cout << "What is the make? ";
			cin >> uMake;
			user.setMake(uMake);
			break;
		case(4):
			cout << "What is the model? ";
			cin >> uModel;
			user.setModel(uModel);
			break;
		case(5):
			user.printBike();
			break;
		}
	}
	return 0;
};


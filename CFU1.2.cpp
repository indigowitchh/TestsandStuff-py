#include <iostream>
#include <math.h>
using namespace std;

//functions
void printThanks();

int main() {
	//nested if statements--------------------------------------------------------------------------------------
	int choice1, choice2;
	cout << "Press 1 for Family Guy or 2 for South Park?" << endl;
	cin >> choice1;
	cout << "Ok...type 1 for relatable characters, type 2 for chaotic characters:" << endl;
	cin >> choice2;

	if (choice1 == 1) {
		if (choice2 == 1)
			cout << "Your assigned character is Meg!" << endl;
		else if (choice2 == 2)
			cout << "Your assigned character is Quagmire!" << endl;
	}
	else if (choice1 == 2) {
		if (choice2 == 1)
			cout << "Your assigned character is Stan!" << endl;
		else if (choice2 == 2)
			cout << "Your assigned character is Cartman!" << endl;
	}
	
		printThanks(); //functions

	//while loop
		char choice = 'a';
		while (choice != 'q') {
			cout << "press any key, q to quit" << endl;
			cin >> choice;
			cout << "You pressed " << choice << endl;

		}
		}
void printThanks() { //functions
	cout << "Thanks for answering lol!" << endl;
}

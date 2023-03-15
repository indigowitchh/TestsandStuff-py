#include <iostream>
using namespace std;

int main() {
//if statements-------------------------------------------------------------------------------------------------
	int cookies;
	cout << "how many crumbl cookies do you have?" << endl;
	cin >> cookies;

	if (cookies < 5)
		cout << "that not my favorite, take one of mine" << endl;
	else if (cookies <= 10)
		cout << "thats a good amount!" << endl;
	else
		cout << "that my favorite, give me one!!!" << endl;
	

	char choice;
	cout << "Who do you like best: (b)art simpson, (s)cooby doo, (r)ick sanchez, (d)affy duck, or (c)artman?" << endl;
	cin >> choice;
	if (choice == 'b')
		cout << "EAT MY SHORTS!" << endl;
	else if (choice == 's')
		cout << "Scooby Dooby Doo!" << endl;
	else if (choice == 'r')
		cout << "Wubba lubba dubdub" << endl;
	else if (choice == 'd')
		cout << "Sufferin succotash!" << endl;
	else if (choice == 'c')
		cout << "Screw you guys, I'm going home!" << endl;
	else
		cout << "Thats not even an option!" << endl;

//switch statements------------------------------------------------------------------------------------------
	char choice2;
	cout << "Who do you like best: (b)art simpson, (s)cooby doo, (r)ick sanchez, (d)affy duck, (c)artman or (q)uit?" << endl;
	cin >> choice2;

	switch (choice2) {
	case 'b':
		cout << "EAT MY SHORTS!" << endl;
		break;
	case 's':
		cout << "Scooby Dooby Doo!" << endl;
		break;
	case 'r':
		cout << "Wubba lubba dubdub" << endl;
		break;
	case 'd':
		cout << "Sufferin succotash!" << endl;
		break;
	case 'c':
		cout << "Screw you guys, I'm going home!" << endl;
	case 'q':
		cout << "Goodbye!" << endl;
		break;
	default:
		cout << "Hey! Thats not even an option!" << endl;
	}

//nested if statements--------------------------------------------------------------------------------------
	char choice3;
	cin >> choice3;
	char choice4;
	cin >> choice4;

	cout << "Do you want (i)ce cream or (c)andy?" << endl;

		if (choice3 == 'i'); {
			cout << "(F)ruit or (c)hocolate?" << endl;
			
			if (choice4 == 'f')
				cout << "You get a strawberry blizzard" << endl;
			else if (choice4 == 'c')
				cout << "You get a hot fudge sundae" << endl;
	}

		if (choice3 == 'c'); {
			cout << "(F)ruit or (c)hocolate?" << endl;
			if (choice4 == 'f')
				cout << "You get a starbursts" << endl;
			else if (choice4 == 'c')
				cout << "You get a hersheys kisses" << endl;
			}
}

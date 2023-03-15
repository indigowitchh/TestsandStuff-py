#include<iostream>
using namespace std;

void circumfrence(double radius);

int main() {
	//while loops--------------------------------------------------------------------
	char choice = 'y';
	for (int i = 3; i <= 30; i += 5)
		cout << i << " ";
	cout << endl;
	while (choice == 'y') {
		cout << "DONUT!" << endl;
		cout << "Want another donut?" << endl;
		cin >> choice;


	}
	cout << "Nevermind then, goodbye!" << endl;
	cout << " " << endl;



	//do while loops-----------------------------------------------------------------
	char choice1;
	do {
		cout << "SIKEEEEEEEEE DONUT!" << endl;
		cout << "I think you like donuts... press q if you really dont" << endl;
		cin >> choice1;
	} while (choice1 != 'q');
	cout << "Understandable have a nice day!" << endl;

	cout << " " << endl;

	double radius;
	while (1) {
		cout << "Gimme a circumfrence:" << endl;
		cin >> radius;
		circumfrence(radius);
	}
}
	void circumfrence(double radius) {
		double c;
		const double k = 2;
		const double p = 3.14;
		c = (k * p * radius);

		cout << "The circumfrence is:" << c << endl;
	}

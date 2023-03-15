#include<iostream>
using namespace std;

int main() {
//Loop 1----------------------------------------------
	for (int i = 50; i <= 70; i += 2)
		cout << i << " ";

	cout << endl;

//Loop 2----------------------------------------------
	for (int j = 100; j >= 50; j -= 5)
		cout << j << " ";

	cout << endl;

//Loop 3----------------------------------------------
	for (int k = 2; k <= 2048; k *= 2)
		cout << k << " ";
	
	cout << endl;

//Nested loop 1---------------------------------------
	for (int i = 0; i < 6; i += 1) { 
		for (int j = 0; j < 10; j += 1) { 
			cout << "*";

			}
	cout << endl;
		}

//Nested loop 2---------------------------------------
	for (int i = 0; i < 5; i += 1) {
		for (int j = 1; j < 5; j += 1) { 
			cout << j << " ";

		}
		cout << endl;
	}

}

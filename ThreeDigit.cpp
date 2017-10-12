/*

Angela Liu and Sofia Lalani - October 5th 2017, Period 4

Ascending Descending

Very Basic Coding using integers

*/

// Libraries

#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {
	int number; // X is a three digit number 
	int digit_a; // hundreds place  /* remove the digits, to make it easier to read -Jarrett Reed */
	int digit_b; // tens place	/* put comments on what your code does */ 
	int digit_c; // ones place

	int x = 0;
	while (x < 30) {
		int number;
		cout << "Choose a 3 Digit number:" << endl;
		cout << endl;
		cin >> number;
		digit_a = number / 100;
		digit_b = (number % 100) / 10;
		digit_c = number % 10;

		if (digit_a > digit_b && digit_b > digit_c) { /* better spacing */
			cout << number << " is descending";
			cout << endl;
		}
		else if (digit_a < digit_b && digit_b < digit_c) {

			cout << number << " is ascending";
			cout << endl;

		}
		else {

			cout << number << " is neither";
			cout << endl;
		}
		x++;
	}
	pause();





	pause(); // pauses to see the displayed text
}

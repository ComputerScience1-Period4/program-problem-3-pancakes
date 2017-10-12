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
for (int i = 0; i < 30; ++i) { //makes loop for 30 times
	
	int number; // X is a three digit number 
	int digit_a; // hundreds place
	int digit_b; // tens place
	int digit_c; // ones place

	cout << "Choose a 3 Digit number: ";
	cin >> number;
	digit_a = number / 100;
	digit_b = (number % 100) / 10;
	digit_c = number % 10;

	if (digit_a > digit_b && digit_b > digit_c) { 
	cout << number << " is descending \n";//prints out descending
}
	else if (digit_a < digit_b && digit_b < digit_c) {

		cout << number << " is ascending \n"; //prints out ascending 

	}
	else { 
		
		cout << number << " is neither \n"; //prints out neither 
	}
	
	
}



	pause(); // pauses to see the displayed text
}

#include "Tape.h"

void Tape::getdata()
{
		cout << "\nPlease enter the title of the tape:" << endl;
		cin >> title;
		cout << endl;
		cout << "Please enter the price of the tape:" << endl;
		cin >> price;
		cout << endl;
		cout << "Please enter the playing time:" << endl;
		cin >> playing_time;
		cout << endl;
}

void Tape::putdata()
{
	cout << "\nThe title of the tape is: " << endl;
	cout << title << endl;
	cout << "The price of the tape is: " << endl;
	cout << price << endl;
	cout << "The number of playing times of the tape is: " << endl;
	cout << playing_time << " minutes" << endl;
}

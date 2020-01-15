#include "Publication.h"
#include <iostream>

using namespace std;

Publication::Publication()
{
}

Publication::Publication(string t, float p)
{
	title = t;
	price = p;
}

void Publication::getdata() {
	cout << "\nPlease enter the title of the publication:" << endl;
	//title=_getche(); 
	cin >> title;
	cout << endl;
	cout << "Please enter the price of the publication:" << endl;
	cin >> price;
	cout << endl;
}

void Publication::putdata() {
	cout << "The title of the publication is: " << endl;
	cout << title << endl;
	cout << "The price of the publication is: " << endl;
	cout << price << endl;
}
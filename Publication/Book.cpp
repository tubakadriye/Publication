#include "Book.h"

Book::Book() : page_count(0)
{
}

Book::Book(string title, float price, int page_count) :
	Publication(title, price), page_count(page_count) {}

void Book::getdata() {
	cout << "\nPlease enter the title of the book:" << endl;
	cin >> title;
	cout << endl;
	cout << "Please enter the price of the book:" << endl;
	cin >> price;
	cout << endl;
	cout << "Please enter the number of pages:" << endl;
	cin >> page_count;
	cout << endl;
}

void Book::putdata() {
	cout << "\nThe title of the book is: " << endl;
	cout << title << endl;
	cout << "The price of the book is: " << endl;
	cout << price << endl;
	cout << "The number of pages of the book:" << endl;
	cout << page_count << endl;
}
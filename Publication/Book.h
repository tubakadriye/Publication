#pragma once
#include "Publication.h"


class Book : public Publication {
private:
	int page_count;
public:
	Book();
	Book(string title, float price, int page_count );
	void getdata();
	void putdata();

};
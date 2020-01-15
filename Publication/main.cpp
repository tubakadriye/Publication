#include <iostream>
#include "Publication.h"
#include "Book.h"
#include "Tape.h"

using namespace std;

int main() {

	Publication p;
	p.getdata();
	p.putdata();
	Book b;
	b.getdata();
	b.putdata();
	Tape t;
	t.getdata();
	t.putdata();
}


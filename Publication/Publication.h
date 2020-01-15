#ifndef PUBLICATION_H
#define PUBLICATION_H
#include <iostream>
#include <conio.h> //for _getce
//#include <string>
using namespace std;

class Publication {
protected:
	string title = "" ;
	float price = 0 ;
public:
	Publication();
	Publication(string t, float p);
	virtual void getdata();
	virtual void putdata();


};



#endif // !PUBLICATION_H



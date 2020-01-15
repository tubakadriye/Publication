#pragma once
#include "Publication.h"

class Tape : public Publication {
private:
	float playing_time;
public:
	void getdata();
	void putdata();
};

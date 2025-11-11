#include "Letter.h"
#include <iostream>
using namespace std;

class Letter
{
private:
	const char SH;
	unsigned int code10;
	unsigned int code16;

public:
	Letter(char sh,int c10, int c16) :SH{ sh }
	{
		code10 = c10;
		code16 = c16;
	};
	Letter() : Letter('\0',0,0) {}
	Letter(char sh) : Letter(sh,0,0) {}
	Letter(char sh,int c10) : Letter (sh,c10, 0) {}
	Letter(char sh,int c10,int c16) : Letter(sh,c10,c16) {}
};

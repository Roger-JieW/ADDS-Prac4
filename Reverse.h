#ifndef REVERSE_H
#define REVERSE_H
#include <iostream>
using namespace std;

class Reverse{
public:
	int num;
	int reversenum;
	int length;
	Reverse();
	int reverseDigit(int value);
	string reverseString(string letters);
};
#endif
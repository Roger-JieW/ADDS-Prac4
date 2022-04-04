#include <iostream>
#include "Reverse.h"
#include <string>
#include <math.h>
using namespace std;

Reverse::Reverse(){
	reversenum=0;
	length=0;
}

int Reverse::reverseDigit(int value){
	
	if (value == 0) { 
		
		return 0; }
	else {
		int x = log10(value);
		return (value % 10)*pow(10,x) + reverseDigit(value / 10);
		
	}



	
}

//int length=letters.length();
string Reverse::reverseString(string letters){
	if (letters.length() == 1) {
		return letters;
	}
	length=letters.length();
	string new_head = letters.substr(length-1, 1);
	//cout<<letters.substr(0,length-1)<<endl;
	string new_tail = reverseString(letters.substr(0,length-1));
	// cout<<new_head<<endl;
	
	return new_head+new_tail;

	

}
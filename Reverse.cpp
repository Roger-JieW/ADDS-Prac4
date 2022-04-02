#include <iostream>
#include "Reverse.h"

using namespace std;

int Reverse::reverseDigit(int value){
    if (value < 0) {
        cout<<"ERROR";
        return -1;
    }
    if(value <10)
    {
        cout<<value;
        return 0;
    }else{
        cout<<value%10;
        reverseDigit(value/10);
    }
    return 0;
};

string Reverse::reverseString(string str){
    if (str.size()==0) {
        return "";
    }
    reverseString(str.substr(1));
    cout<<str[0];

    return "";
};

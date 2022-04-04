#include <iostream>
#include "Reverse.h"
#include"Truckloads.h"
#include"EfficientTruckloads.h"
#include<vector>
#include <sstream>
#include <iterator>
using namespace std;
bool intorstr(string input){
	for(int i=0;i<input.size();i++){
		if(input[i]<48||input[i]>57){
			return 0;
		}
	}
	return 1;
}
int main(){
	string text = "";
  getline(cin, text);
  std::istringstream iss (text);

    string first, second, third, last; 
  for (int n=0; n<4; n++)
  {
    
    if(n == 0 ){
        iss >> first;
    }
    if( n == 1)
    {
        iss >> second;
    }
    if(n == 2)
    {
        iss >> third;
    }
    if(n == 3)
    {
        iss >>last;
    }

  }

    
	
	Reverse a;
	Truckloads b;
	EfficientTruckloads c;
	
	if (!intorstr(first)||stoi(first) < 0) {
		cout << "ERROR ";
		
	}
	else{
		cout<<a.reverseDigit(stoi(first))<<" ";
	}
	
	cout<<a.reverseString(second)<<" ";
	cout << b.numTrucks(stoi(third),stoi(last))<<" ";
	cout << c.numTrucks(stoi(third),stoi(last));
}

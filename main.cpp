#include <iostream>
#include <sstream>
#include <vector>
#include "Reverse.h"
#include "TruckLoads.h"
#include "EfficientTruckLoads.h"

using namespace std;

int main(){
    Reverse a;
    TruckLoads b;
    EfficientTruckLoads c;
    string input = "";
    getline(cin, input);

    string buf;
    stringstream ss(input);
    vector<string> tokens;

    while(ss >> buf){
        tokens.push_back(buf);
    }

    a.reverseDigit(stoi(tokens[0]));
    cout<<" ";
    a.reverseString(tokens[1]);
    cout<<" ";

    bool isDigitAll = true;

    for(int i = 0; i<tokens[2].size(); i++){
        if(isdigit(tokens[2][i]) == 0){
            isDigitAll = false;
            break;
        }
    }
    for(int i = 0; i<tokens[3].size(); i++){
        if(isdigit(tokens[3][i]) == 0){
            isDigitAll = false;
            break;
        }
    }

    if(isDigitAll == false){
        cout<<"ERROR ";
    }
    else if (stoi(tokens[2])>0 && stoi(tokens[3])>0) {
        cout<<b.numTrucks(stoi(tokens[2]),stoi(tokens[3]))<<" ";
    } 
    else {
        cout<<"ERROR ";
    }

    if(isDigitAll == false){
        cout<<"ERROR ";
    }
    else if (stoi(tokens[2])>0 && stoi(tokens[3])>0) {
        cout<<c.numTrucks(stoi(tokens[2]),stoi(tokens[3]))<<" ";
    } 
    else {
        cout<<"ERROR ";
    }
    return 0;
}
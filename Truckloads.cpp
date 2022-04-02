#include <iostream>
#include "TruckLoads.h"

using namespace std;

int TruckLoads::numTrucks(int numCrates, int loadSize){
    if (numCrates <= loadSize) {
        return 1;
    }else{
        if (numCrates % 2 == 0) {
            return numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2, loadSize);
        }
        else{
            return numTrucks((numCrates+1)/2, loadSize) + numTrucks(numCrates/2, loadSize);
        }
    }
};

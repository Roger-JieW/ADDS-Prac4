#include <iostream>
#include "EfficientTruckLoads.h"

using namespace std;

int memoisation = 0;

int EfficientTruckLoads::numTrucks(int numCrates, int loadSize){
    if (numCrates <= loadSize) {
        memoisation++;
    }else{
        if (numCrates % 2 == 0) {
            numTrucks(numCrates/2,loadSize);
            numTrucks(numCrates/2,loadSize);
        }else{
            numTrucks((numCrates+1)/2,loadSize);
            numTrucks(numCrates/2,loadSize);
        }
    }
    return memoisation;
};

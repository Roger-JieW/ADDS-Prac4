#include <iostream>
#include "EfficientTruckloads.h"
using namespace std;

int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{
	if (numCrates==0){
		return 0;
	}
	if (numCrates <= loadSize) {
		return 1;
	}
	else
	{
		int first_half = 0;
		int second_half = 0;
		first_half = (numCrates + 1) / 2;
		second_half = numCrates / 2;
		return numTrucks(first_half, loadSize) + numTrucks(second_half, loadSize);
	}
}
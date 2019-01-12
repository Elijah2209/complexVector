#include"complex.h"
#include"complexVector.h"
#include<iostream>

int main() {
	int sizeMyVec;
	std::cin >> sizeMyVec;
	complexVector myVec(sizeMyVec);
	int sizeMyVec_1;
	std::cin >> sizeMyVec_1;
	complexVector myVec_1(sizeMyVec_1);
	myVec.sumVec(sizeMyVec, myVec_1, sizeMyVec_1);
	return 0;
}
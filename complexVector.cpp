#include"complex.h"
#include"complexVector.h"
#include<iostream>

complexVector::complexVector(int N) {
	int i = 0;
	vec = new complex[N];
	while (i < N) {
		complex nom;
		vec[i] = nom;
		i++;
	}
}

complexVector::complexVector(const complexVector& tmp) {
	vec = tmp.vec;
}

void complexVector::sumVec(int sizeThisVec, complexVector myVec, int sizeMyVec) {
	int size;
	complexVector* addend_1;
	complexVector* addend_2;
	if (sizeThisVec >= sizeMyVec) {
		complex* newVec = new complex[sizeThisVec];
		for (int i = 0; i < sizeMyVec; i++) {
			newVec[i] = myVec.vec[i];
		}
		addend_1 = &myVec;
		addend_1->vec = newVec;
		addend_2 = this;
		size = sizeMyVec;
		while (size >= 0) {
			addend_2->vec[size].add(addend_1->vec[size]);
			size--;
		}
	}
	else {
		complex* newVec = new complex[sizeMyVec];
		for (int i = 0; i < sizeMyVec; i++) {
			newVec[i] = myVec.vec[i];
		}
		addend_1 = &myVec;
		addend_1->vec = newVec;
		addend_2 = this;
		size = sizeThisVec;
		while (size >= 0) {
			addend_1->vec[size].add(addend_2->vec[size]);
			size--;
		}
		addend_2 = addend_1;
	}
}
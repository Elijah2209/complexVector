#pragma once
class complexVector {
private:
	complex* vec;
public:
	~complexVector() {
		delete[] vec;
	}
	complexVector(int);
	complexVector(const complexVector&);
	void sumVec(int, complexVector, int);
};

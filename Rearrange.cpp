#include "Rearrange.h"
#include <iostream>
#include <string>
using namespace std;

Individual Rearrange::mutate(Individual ind, int k) {

	string indstr = ind.getString();

	int pos = k % indstr.size();

	string front(ind.getLength() - pos, '0');
	string end(pos, '0');

	for (int i = 0; i < pos; i++) {
		end[i] = indstr[i];
	}

	for (int i = 0; i < (int)indstr.size()-pos; i++) {
		front[i] = indstr[pos + i];
	}

	Individual newInd(front + end);

	return newInd;

}
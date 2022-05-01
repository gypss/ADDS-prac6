#include <string>
#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;

Individual* execute(Individual* indPtr, Mutator* mPtr, int k) {

	Individual ind = mPtr->mutate(*indPtr, k);

	Individual* offspring = new Individual(ind.getString());

	return offspring;
}

int main(void) {

	BitFlip * bf = new BitFlip;
	Rearrange * re = new Rearrange;

	string binarystr1;
	int k1;
	string binarystr2;
	int k2;
	
	cin >> binarystr1 >> k1 >> binarystr2 >> k2;

	Individual * in1 = new Individual(binarystr1);
	Individual* in2 = new Individual(binarystr2);

	Individual * bfIn1 = execute(in1, bf, k1-1);

	Individual * reIn2 = execute(in2, re, k2-1);

	cout << bfIn1->getString() << " " << reIn2->getString() << " " << reIn2->getMaxOnes();


}
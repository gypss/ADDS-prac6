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

	Individual * in = new Individual("1101101111");

	BitFlip * bf = new BitFlip;
	BitFlipProb * bfProb = new BitFlipProb(0.6);
	Rearrange * re = new Rearrange;

	Individual * bfIn = execute(in, bf, 3);

	cout << bfIn->getString() << endl;


	Individual* bfProbIn = execute(in, bfProb, 3);

	cout << bfProbIn->getString() << endl;


	Individual* reIn = execute(in, re, 3);

	cout << reIn->getString() << endl;


}
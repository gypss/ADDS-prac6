#include "BitFlipProb.h"
#include <time.h> 


BitFlipProb::BitFlipProb(double p) :Mutator() {
	prob = p;
}

Individual BitFlipProb::mutate(Individual ind, int k) {

	srand(time(NULL));
	

	for (int i = 0; i < ind.getLength(); i++) {
		if ((double)rand() / RAND_MAX <= prob) {
			ind.flipBit(i);
		}
	}

	return ind;
}
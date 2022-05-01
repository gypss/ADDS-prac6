#include "BitFlip.h"
using namespace std;

Individual BitFlip::mutate(Individual ind, int k) {
	ind.flipBit((k % ind.getLength()));

	return ind;
}
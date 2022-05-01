#include "Individual.h"
using namespace std;

Individual::Individual(int DNAlength) {
	string zeroString(DNAlength, '0');

	binaryString = zeroString;
}

Individual::Individual(string DNA) {
	binaryString = DNA;
}

string Individual::getString() {
	return binaryString;
}

int Individual::getBit(int pos) {
	if (pos > (int)binaryString.length() - 1) {
		return -1;
	}

	return binaryString[pos]-48;
}

void Individual::flipBit(int pos) {
	if (binaryString[pos] == '0') {
		binaryString[pos] = '1';
	}

	else if (binaryString[pos] == '1') {
		binaryString[pos] = '0';
	}
}

int Individual::getMaxOnes() {

	int temp = 0;
	int ans = 0;

	for (int i = 0; i < (int)binaryString.size(); i++) {


		if (binaryString[i] == '1') {
			temp++;

			if (temp > ans) {
				ans = temp;
			}
		}
		else {
			temp = 0;
		}
	}

	return ans;
}

int Individual::getLength() {
	return binaryString.size();
}


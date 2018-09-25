#include <iostream>
#include "insertNumbers.h"
#include "calculateValue.h"

using namespace std;

int main() {
	int *numbersArray;
	int *calculatedValue;

	cout << "   A   " << "\n";
	cout << "  ---  " << "\n";
	cout << "   B   " << "\n";
	cout << "-------" << "\n";
	cout << "   C   " << "\n";
	cout << "  ---  " << "\n";
	cout << "   D   " << "\n";

	numbersArray = insertNumbers();
	calculatedValue = calculateValue(numbersArray);

	cout << "Het uitgerekende resultaat is " << "\n";
	cout << "   " << calculatedValue[0] << "   " << "\n";
	cout << "  ---  " << "\n";
	cout << "   " << calculatedValue[1] << "   " << "\n";
}
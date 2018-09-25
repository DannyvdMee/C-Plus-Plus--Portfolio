//
// Created by Danny van der Mee on 02/03/18.
//
#include <iostream>

using namespace std;

int *insertNumbers();

int numbers[4] = {};

int *insertNumbers()
{
	cout << "Insert A: ";
	cin >> numbers[0];
	cout << "\n";

	cout << "Insert B: ";
	cin >> numbers[1];
	cout << "\n";

	cout << "Insert C: ";
	cin >> numbers[2];
	cout << "\n";

	cout << "Insert D: ";
	cin >> numbers[3];
	cout << "\n";

	return numbers;
}
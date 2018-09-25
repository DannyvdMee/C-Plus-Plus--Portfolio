//
// Created by Danny van der Mee on 02/03/18.
//
#include <iostream>

// Array maken
int values[2] = {};

int *calculateValue(int* array);

int *calculateValue(int* numbers)
{
	int int1, int2, int3, int4, int5, int6;

	int1 = numbers[0];
	int2 = numbers[1];
	int3 = numbers[2];
	int4 = numbers[3];

	int5 = int1 * int4;
	int6 = int2 * int3;

	values[0] = int5;
	values[1] = int6;

	return values;
}
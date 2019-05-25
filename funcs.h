#pragma once
#include <iostream>
#define PI 3.14159265358979323846

double* sinList()	//can't use double[]...
{
	double static array[16];
	for (int i = 0; i < 16; i++)
	{
		double j = static_cast<double>(i);// Due to arithmetic error...
		j = j - 7;
		array[i] = sin((PI * j) / 15);
	}
	return array;
}

void modBinSearch(double* array)
{	

}

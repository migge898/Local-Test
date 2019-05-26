#pragma once
#include <iostream>
#include <algorithm>
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

double modBinSearch(double array[])
{	
	const int len_array = 16;
	int left = 0;                      
	int right = len_array - 1;         

	//kown Binary searcg
	while (left <= right)
	{
		int mid = left + ((right - left) / 2); 

		if (array[mid] == 0)       
			return 0;
		else
			if (array[mid] > 0)
				right = mid - 1;     
			else 
				left = mid + 1;      
	}
}

#include <iostream>
#include "funcs.h"

int main()
{
	double* liste = sinList();
	std::cout << "SinList() creates the following array:\n\n";
	for (int i = 0; i < 16; i++)
	{
		std::cout << liste[i] << std::endl;
	}
	std::cout << "\nThe smallest non-negative element is: "<<modBinSearch(liste)<<std::endl;
}
#include <iostream>
#include "funcs.h"

int main()
{
	double* liste = sinList();
	std::cout << liste[9];
	modBinSearch(liste);
}
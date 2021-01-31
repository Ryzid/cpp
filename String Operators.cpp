#include <stdio.h>
#include <cstring>
#include <cctype>
#include <iostream>

int main(int argc, char **argv)
{
//	double Weight {0};
//	double MicroGram {0};
//	double Dose {0};
//	std::cout << "Gram to Tabs\nPurchased Product:";
//	std::cin >> Weight;
//	MicroGram = Weight*1000*1000; // mg*1000ug
//	std::cout << "Dosage:";
//	std::cin >> Dose;
//	std::cout << "\n";
//	std::cout << MicroGram/Dose << " Hits";

	char String1[20] {};
	char String2[20] {};
	char String3[50] {};
	char temp[50] {};
	
	std::cout << "Please enter First String\n";
	std::cin >> String1;
	std::cout << "Please enter Last String\n";
	std::cin >> String2;
	
	std::cout << String1 << " + " << String2 << " = ";
	
	strcpy(String3,String1);
	strcat(String3, " ");
	strcpy(String3, String2);
	
	std::cout << String3;
	
	
	return 0;
}

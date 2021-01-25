// AssignmentOperator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int num1{};
	int num2{ 15 };
	num1 = 100;
	num2 += num1;
	num1 *= num2;
	std::cout << num2 << std::endl;
	std::cout << num1;
}


#include <stdio.h>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	std::string Input;
	std::cin >> Input;
	std::string Output{"x",Input.length()};
	for (int i=1;i<=Input.length();i++){
		Output[i-1] = Input[Input.length()-i];
		//std::cout << Input[i-1];
	}
	std::cout << Output;
	return 0;
}

#include <stdio.h>
#include <iostream>

int main(int argc, char **argv)
{
	for (int i=1;i<=100;i++){
		bool Thrub = ((int)i/3==(double)i/3);
		bool Fiv = ((int)i/5==(double)i/5);
		if (Thrub || Fiv){
			if(Thrub){
				std::cout<<"Fizz";
			};
			if(Fiv){
				std::cout<<"Buzz";
			}
			std::cout<<std::endl;
		} else {
			std::cout << i << std::endl;
		}
		//std::cout << i;
	}
	return 0;
}

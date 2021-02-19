// Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <vector>
#include <stdlib.h>

void Fill(int num,std::vector<int> *vec) {
    for (int i = 1; i <= num; i++) {
        vec->push_back(rand());
    }
}
void Display(std::vector<int>* vec) {
    for (int i = 0; i <= vec->size()-1; i++) {
        if (vec->at(i)==NULL) {
            std::cout << "Null Vector";
        }
        else {
            std::cout << "Vector(" << i << ") -> "<< vec->at(i) << std::endl;
        }
    }
}
int main()
{
    std::vector <int> Test;
    std::cout << "Hello World!\n Test Vector has (" << Test.size() << ") Elements";
    Fill(3, &Test);
    std::cout << "Hello World!\n Test Vector has (" << Test.size() << ") Elements\n";
    Display(&Test);
    Test.pop_back();
    std::cout << "Hello World!\n Test Vector has (" << Test.size() << ") Elements\n";
    Display(&Test);
    if (Test.capacity() != Test.size()) {
        std::cout << "Test Size imbalance: " << (Test.capacity() - Test.size()) << std::endl;
        Test.resize(Test.size());
        for (int i = 1; i <= Test.size(); i++) {
            Test.at(i - 1) = 100;
        }
    }
    Display(&Test);
    std::cout << Test.cbegin()._Unwrapped();
}

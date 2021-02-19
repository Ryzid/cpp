// Vectors2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>


int main()
{
    std::vector<int> vec1;
    std::vector<int> vec2;
    vec1.push_back(10);
    vec1.push_back(20);
    std::cout << "Vec1(0)" << vec1.at(0) << "\nVec1(1)" << vec1.at(1) << "\nSize: " << vec1.size() << std::endl;
    vec2.push_back(100);
    vec2.push_back(200);
    std::cout << "Vec2(0)" << vec2.at(0) << "\nVec2(1)" << vec2.at(1) << "\nSize: " << vec2.size() << std::endl;

    std::vector<std::vector<int>> vector_2d;
    vector_2d.push_back(vec1);
    vector_2d.push_back(vec2);
    std::cout << "vector_2d(0)(0)" << vector_2d.at(0).at(0) << "\nvector_2d(1)(0)" << vector_2d.at(1).at(0) << "\nSize: " << vector_2d.size() << std::endl;

    vector_2d.at(0).at(0) == 1000;

}

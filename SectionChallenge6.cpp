// SectionChallenge6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int small_rooms, large_rooms{ 0 };
	int small_room_cost{ 25 };
	int large_room_cost{ 35 };
	int pre_tax{ 0 };
	float total_cost{ 0 };
	float sales_tax{ 0.06 };
	std::cout << "Hello, How many small, and Large rooms do you have to be cleaned?\n";
	std::cin >> small_rooms >> large_rooms;
	std::cout << "\n Small Rooms:" << small_rooms << "\n Large Rooms:" << large_rooms;
	std::cout << "\nPrice Chart:\nSmall:25\nLarge:35\n";
	pre_tax = (small_room_cost * small_rooms) + (large_room_cost * large_rooms);
	std::cout << "SubTotal: " << pre_tax;
	std::cout << "\nTax: " << sales_tax * pre_tax;
	std::cout << "\nTotal: " << pre_tax + (sales_tax * pre_tax);
}


#include <iostream>
using namespace std;

int main(){
	int TheirNumber; // Initialize variable to get their number
	
	cout << "Hello user, Please enter your favorite number 1-100\n"; // output the prompt string
	cin >> TheirNumber; // Store their string response in TheirNumber
	
	if (TheirNumber != 0 && TheirNumber <= 100){ // Check to see if TheirNumber isnt 0 and its under 100
		cout << "Wow! " << TheirNumber << " is my favorite number too!\n"; // Response
		return 0; // Return
	} else { // If they entered a number bigger than 100, or 0 then
		cout << "Invalid Number :(\n"; // Sad
		return 0; // Return
	}
	
}

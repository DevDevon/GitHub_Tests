/* Testing GitHub features using a simple Hello World program in cpp.
*/

#include <iostream>

int main() {
	std::cout << "Hello World!\n";

	int number{ 3 };

	std::cout << "Please enter an integer: ";
	std::cin >> number;
	std::cout << "\nYou entered: " << number << ".\n"; //TEST
}
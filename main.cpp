#include <iostream>

int main(){

//Variables, will be used later in the code.
int num1 = 0;
int num2 = 0;

//Asks for to inputs num1 and num2.
std::cout << "Welcome! \n";
std::cout << "Enter a number: ";
std::cin >> num1;
std::cout << "You entered, " << num1 << "\n";
std::cout << "Enter another number: ";
std::cin >> num2;
std::cout << "You entered, " << num2 << "\n";

//Calculates the final result adding the values entered.
std::cout << "Result: " << num1 + num2 << "\n";

return 1;
}

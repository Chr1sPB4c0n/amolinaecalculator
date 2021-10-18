#include <iostream>

int main(){
//Welcome, screen + my Github repository.
std::cout << "Welcome to amolinae's calculator!\n";
std::cout << "Github repository: https://github.com/amolinae06/amolinaecalculator\n";
std::cout << "\n";

//Variables, will be used later in the code.
int num1 = 0;
int num2 = 0;

//Asks for to inputs num1 and num2.
std::cout << "Enter a number: ";
std::cin >> num1;
std::cout << "You entered, " << num1 << "\n";
std::cout << "Enter another number: ";
std::cin >> num2;
std::cout << "You entered, " << num2 << "\n";

//Asks the user to add or substract.
int option = 0;
std::cout << "Choose what you want to do, type 1 to add, type 2 to substract.\n";
std::cin >> option;

//Calculates the final result adding or substracting the inputs.
if (option == 1){
std::cout << "You chose addition.\n";
std::cout << "Result of the addition: " << num1 + num2 << "\n";
}
else if (option == 2) {
std::cout << "You chose substraction.\n";
std::cout << "Result of the substraction: " << num1 - num2 << "\n";
}

return 0;
}

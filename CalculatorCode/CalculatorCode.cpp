
// ASKS THE USER FOR TWO NUMBERS AND AN OPERAND
// THE CODE WILL THEN APPLY THAT OPERATION TO THE TWO NUMBERS THAT WERE CHOSEN

#include <iostream>
using namespace std;
int main() {

	// INIITIALIZAITNO
	int continueOn = 1;
	int num1, num2;
	char operation;
	double total;


	// CODE RUNS IN CONTINUOUS LOOP
	while (continueOn == 1) {

		// ASKS USER FOR FIRST NUMBER
		cout << "What is the first number? ";
		cin >> num1;

		// ASKS USER FOR SECOND NUMBER
		cout << "What is the second number? ";
		cin >> num2;

		// ASKS USER FOR OPERATION
		cout << "What is the operation? ";
		cin >> operation;

		// APPLY SWITCH CASES FOR DIFFERENT OPERANDS
		switch (operation) {
		case '+': total = num1 + num2; // ADDITION
			cout << num1 << " " << operation << " " << num2 << " = " << total << endl;
			break;
		case '-': total = num1 - num2; // SUBTRACTION
			cout << num1 << " " << operation << " " << num2 << " = " << total << endl;
			break;
		case '*': total = num1 * num2; // MULTIPLICATION
			cout << num1 << " " << operation << " " << num2 << " = " << total << endl;
			break;
		case '/': total = static_cast<double>(num1) / num2; // DIVISION
			cout << num1 << " " << operation << " " << num2 << " = " << total << endl;
			break;
		case '%': total = num1 % num2; // MODULAR
			cout << num1 << " " << operation << " " << num2 << " = " << total << endl;
			break;
		}

		cout << "Would you like to continue? Yes (1) or No (0) ";
		cin >> continueOn;
	}


	return 0;
}

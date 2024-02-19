#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int num1;
	int num2;
	char sign;

	cout << "Please enter your first number:";
	cin >> num1;

	cout << "Please enter your second number:";
	cin >> num2;

	cout << "Please enter the operator you would like to apply to these numbers (available operators are: '+', '-', '/', '*'):";
	cin >> sign;

	if (sign == '+') {
		cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
	}
	else if (sign == '-') {
		cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
	}
	else if (sign == '*') {
		cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
	}
	else if (sign == '/') {
		if (num2 == 0) {
			cout << "The second number (denominator) cannot be 0!" << endl;
		}
		else {
			cout << std::setprecision(3) << num1 << "/" << num2 << "=" << num1 / num2 << endl;
		}
	}

	else {
		cout << "The operator must be either '+', '-', '*', '/'" << endl;
	}
}
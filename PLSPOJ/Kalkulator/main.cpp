#include <iostream>
using namespace std;

int main() {
	
	char sign;
	int num1, num2;

	while (cin >> sign >> num1 >> num2)
	{
		if (sign == '+') cout << num1 + num2 << endl;
		else if (sign == '-') cout << num1 - num2 << endl;
		else if (sign == '*') cout << num1 * num2 << endl;
		else if (sign == '/') cout << num1 / num2 << endl;
		else if (sign == '%') cout << num1 % num2 << endl;
	}

	return 0;
}
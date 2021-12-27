/*==============================================
Name: Stefania Ascencio
 Calculator.
The program solve for addition, substraction, multiplication, and Division :)!!!
================================================*/


#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	double num1, num2;
	int modulus1, modulus2;
	char choper;

	cout << "Welcome! Enter your equation (e.g.10 + 5): ";
	cin >> num1 >> choper >> num2;
	if (choper == '+')
	{
		cout << num1 << " " << choper << " " << num2 << " = " << num1 + num2 << endl;

	}
	else if (choper == '-')
	{
		cout << num1 << " " << choper << " " << num2 << " = " << num1 - num2 << endl;
		cin;
	}
	else if (choper == '*')
	{
		cout << num1 << " " << choper << " " << num2 << " = " << num1 * num2 << endl;

	}
	else if (choper == '/' && num2 != 0)
	{
		cout << num1 << " " << choper << " " << num2 << " = " << num1 / num2 << endl;
	}
	else if (choper == '/' && num2 == 0)
	{
		cout << "ERROR: " << num1 << " " << choper << " " << num2 << " " << "=> CANNOT DIVIDE BY ZERO" << endl;
	}
	else if (choper == '%' && int(num1) != num1 || int(num2) != num2)
	{
		cout << "ERROR: " << num1 << " " << choper << " " << num2 << " " << "=> MODULUS REQUIRES INTEGER OPERANDS" << endl;
	}
	else if (choper == '%' && num2 != 0)
	{
		modulus1 = num1, modulus2 = num2;
		cout << modulus1 << " " << choper << " " << modulus2 << " = " << modulus1 % modulus2 << endl;
	}

	system("pause");
	return 0;

}

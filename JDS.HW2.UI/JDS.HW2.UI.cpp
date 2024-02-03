// JDS.HW2.UI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	float Add(float num1, float num2);
	float Sub(float num1, float num2);
	float Mul(float num1, float num2);
	float Divide(float num1, float num2);
	float pow(float num1, float num2);

	
	float num1, num2, answer;
	char operation;

    std::cout << "Please input two numbers. After, input any of the shown characters for calculating: +, -, *, /, ^\n";
	std::cin >> num1;
	std::cin >> num2;

	switch (operation) {
	case '+':
		answer = Add(num1, num2);
		cout << "Your answer is : " << answer << endl;
		break;
	case '-':
		answer = Sub(num1, num2);
		cout << "Your answer is : " << answer << endl; 
		break;
	case '*':
		answer = Mul(num1, num2);
		cout << "Your answer is : " << answer << endl;
	case '^':
		answer = pow(num1, num2);
		cout << "Your answer is : " << answer << endl;
		
	}

	_getch();
	return 0;
}


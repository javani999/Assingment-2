#include <iostream>
using namespace std;

// Function declarations
float Add(float num1, float num2);
float Sub(float num1, float num2);
float Mul(float num1, float num2);
bool Divide(float num1, float num2, float& answer);
float Pow(float num1, float num2);

int main() {
    float num1, num2, answer;
    char operation;

    cout << "Please input two numbers. After, input any of the shown characters for calculating: +, -, *, /, ^\n";
    cin >> num1 >> num2;
    cin >> operation;

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
        break; // Added missing break statement
    case '^':
        answer = Pow(num1, num2);
        cout << "Your answer is : " << answer << endl;
        break;
    case '/':
        if (Divide(num1, num2, answer)) {
            cout << "result is : " << answer << endl;
        }
        else {
            cout << "error: division by zero" << endl;
        }
        break;
    default:
        cout << "Invalid operation." << endl;
        break;
    }

    return 0;
}

// Function definitions
float Add(float num1, float num2) {
    return num1 + num2;
}

float Sub(float num1, float num2) {
    return num1 - num2;
}

float Mul(float num1, float num2) {
    return num1 * num2;
}

bool Divide(float num1, float num2, float& answer) {
    if (num2 == 0) {
        return false;
    }
    answer = num1 / num2;
    return true;
}

float Pow(float num1, float num2) {
    float result = 1;
    for (int i = 0; i < num2; ++i) {
        result *= num1;
    }
    return result;
}

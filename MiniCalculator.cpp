#include <iostream>
#include <math.h>

using namespace std;

int main () {
    cout << "~~~~~~Mini Calculator~~~~~~" << endl;
    
    double num1, num2;
    char op;
    double result;

    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter an operator (Addition (+), Subtraction (-), Multiplication (*), Division (/), Power (^), Root (r): ";
    cin >> op;
    cout << "Enter another number: ";
    cin >> num2;
    

    if (op == '+') {
        result = num1 + num2;
        cout << "Equation: " << num1 << " " << op << " " << num2 << " = " << result << endl;
    }
    else if (op == '-') {
        result = num1 - num2;
        cout << "Equation: " << num1 << " " << op << " " << num2 << " = " << result << endl;
    }
    else if (op == '*') {
        result = num1 * num2;
        cout << "Equation: " << num1 << " " << op << " " << num2 << " = " << result << endl;
    }
    else if (op == '/') {
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
        } else {
            result = num1 / num2;
            cout << "Equation: " << num1 << " " << op << " " << num2 << " = " << result << endl;
        }
    }
    else if (op == '^') {
        result = pow(num1, num2);
        cout << "Equation: " << num1 << " " << op << " " << num2 << " = " << result << endl;
    }
    else if (op == 'r') {
        if (num2 == 0) {
            cout << "Error: Root degree cannot be zero!" << endl;
        } else {
            result = pow(num1, 1.0 / num2);
            cout << "Equation: " << num1 << " " << op << " " << num2 << " = " << result << endl;
        }
    }
    else {
        cout << "Error: Invalid operator!" << endl;
    }
}
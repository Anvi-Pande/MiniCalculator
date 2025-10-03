#include <iostream>
#include <math.h>

using namespace std;

void display(char op, double num1, double num2, double result);

// ===== Add this new function declaration =====
long long factorial(int n);

int main()
{
    double num1, num2;
    char op;
    double result;
    bool loop = true;
    string inpt;

    cout << "~~~~~~Mini Calculator~~~~~~" << endl;

    while (loop)
    {
        cout << "Enter a number: ";
        cin >> num1;
        cout << "Enter an operator (Addition (+), Subtraction (-), Multiplication (*), Division (/), Power (^), Root (r), Factorial (!)): ";
        cin >> op;
        cout << "Enter another number: ";
        cin >> num2;

        if (op == '+')
        {
            result = num1 + num2;
            display(op, num1, num2, result);
        }
        else if (op == '-')
        {
            result = num1 - num2;
            display(op, num1, num2, result);
        }
        else if (op == '*')
        {
            result = num1 * num2;
            display(op, num1, num2, result);
        }
        else if (op == '/')
        {
            if (num2 == 0)
            {
                cout << "Error: Division by zero!" << endl;
            }
            else
            {
                result = num1 / num2;
                display(op, num1, num2, result);
            }
        }
        else if (op == '^')
        {
            result = pow(num1, num2);
            display(op, num1, num2, result);
        }
        else if (op == 'r')
        {
            if (num2 == 0)
            {
                cout << "Error: Root degree cannot be zero!" << endl;
            }
            else
            {
                result = pow(num1, 1.0 / num2);
                display(op, num1, num2, result);
            }
        }
        // ===== New factorial section =====
        else if (op == '!')
        {
            result = factorial((int)num1); // factorial only uses num1
            if (result != -1)
                cout << num1 << "! = " << result << endl;
        }
        else
        {
            cout << "Error: Invalid operator!" << endl;
        }

        cout << "Input (STOP) to close (enter anything else to continue): ";
        cin >> inpt;
        if (inpt == "STOP")
        {
            loop = false;
        }
    }
}

void display(char op, double num1, double num2, double result)
{
    cout << "Equation: " << num1 << " " << op << " " << num2 << " = " << result << endl;
}

// ===== New factorial function definition =====
long long factorial(int n)
{
    if (n < 0)
    {
        cout << "Error: Factorial of negative number is undefined!" << endl;
        return -1;
    }
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

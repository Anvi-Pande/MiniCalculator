#include <iostream>
#include <math.h>

using namespace std;

// Function prototypes
void display(char op, double num1, double num2, double result);
void primaryOp();
void specialOp();
double factorial(int n);
double sine(double n);
double cosine(double n);
double tangent(double n);
double cosecant(double n);
double secant(double n);
double cotangent(double n);
void logOp();
double logarithm(double value, double base);
double naturalLog(double value);
double ePower(double x);


// Main function
int main()
{

    bool loop = true;
    string inpt;

    cout << "~~~~~~Mini Calculator~~~~~~";

    while (loop)
    {
        cout << endl;
        cout << "Which operation would you like to compute.\n(1) Primary Operations\nAddition\nSubtraction\nMultiplication\nDivision\nPower\nRoot\nFactorial\n";
        cout << endl; 
        cout << "(2) Special Operations\nSine\nCosine\nTangent\nCosecant\nSecant\nCotangent\n";
        cout << endl; 
        cout << "(3) Logarithim Operations\n";
        cout << endl; 
        cout << "(4) Exponential Function (e^x)\n";
        cin >> inpt;

        if (inpt == "1")
        {
            primaryOp();
        }
        if (inpt == "2")
        {
            specialOp();
        }
        if (inpt =="3")
            {
            logOp();
            }
        if (inpt == "4")
        {
            double x;
            cout << "Enter exponent for e^x: ";
            cin >> x;
            cout << "e^" << x << " = " << ePower(x) << endl;
        }

        cout << "Input (STOP) to close (enter anything else to continue): ";
        cin >> inpt;
        if (inpt == "STOP" || inpt == "stop")
        {
            loop = false;
        }
    }
}

// Primary operations options function
void primaryOp()
{
    double num1, num2;
    char op;
    double result;
    cout << "Enter a number (for power and root this # is the base): ";
    cin >> num1;
    cout << "Enter an operator (Addition (+), Subtraction (-), Multiplication (*), Division (/), Power (^), Root (r), Factorial (!)): ";
    cin >> op;
    cout << "Enter another number (for power and root this # is the exponent or ): ";
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
    else if (op == '!')
    {
        result = factorial((int)num1);
        if (result != -1)
            cout << num1 << "! = " << result << endl;
    }
    else
    {
        cout << "Error: Invalid operator!" << endl;
    }
}

// Primary operation display function
void display(char op, double num1, double num2, double result)
{
    cout << "Equation: " << num1 << " " << op << " " << num2 << " = " << result << endl;
}

// Special operations options and display function
void specialOp()
{
    char option;
    double angle;
    cout << "Enter 'S' for SINE,'C' for COSINE , 'T' for TANGENT, 'U' for COSECANT->(1/SINE), 'V' for SECANT->(1/COSINE), 'W' for COTANGENT->(1/TANGENT)" << endl;
    cin >> option;

    if (option == 'S' || option == 's')
    {
        cout << "SINE\nEnter the angle you want in degrees(ex: for sin(90 degrees), enter 90): " << endl;
        cin >> angle;
        cout << endl
             << "SIN(" << angle << ") = " << sine(angle) << endl;
    }
    else if (option == 'C' || option == 'c')
    {
        cout << "COSINE\nEnter the angle you want in degrees(ex: for cos(90 degrees), enter 90): " << endl;
        cin >> angle;
        cout << endl
             << "COS(" << angle << ") = " << cosine(angle) << endl;
    }
    else if (option == 'T' || option == 't')
    {
        cout << "Tangent\nEnter the angle you want in degrees(ex: for tan(90 degrees), enter 90): " << endl;
        cin >> angle;
        cout << endl
             << "TAN(" << angle << ") = " << tangent(angle) << endl;
    }
    else if (option == 'U' || option == 'u')
    {
        cout << "Cosecant\nEnter the angle you want in degrees(ex: for csc(90 degrees), enter 90): " << endl;
        cin >> angle;
        cout << endl
             << "CSC(" << angle << ") = " << cosecant(angle) << endl;
    }
    else if (option == 'V' || option == 'v')
    {
        cout << "Secant\nEnter the angle you want in degrees(ex: for sec(90 degrees), enter 90): " << endl;
        cin >> angle;
        cout << endl
             << "SEC(" << angle << ") = " << secant(angle) << endl;
    }
    else if (option == 'W' || option == 'w')
    {
        cout << "Cotangent\nEnter the angle you want in degrees(ex: for cot(90 degrees), enter 90): " << endl;
        cin >> angle;
        cout << endl
             << "COT(" << angle << ") = " << cotangent(angle) << endl;
    }
}

// Factorial function
double factorial(int n)
{
    if (n < 0)
    {
        cout << "Error: Factorial of negative number is undefined!" << endl;
        return -1;
    }
    double fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// Sine function 
double sine(double n)
{
    double answer;
    double first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth;
    double radians;
    const double PI = 3.14159265359; 

    radians = n * (PI / 180);
    first = radians;
    second = (pow(radians,3)) / (factorial(3));
    third = (pow(radians,5)) / (factorial(5));
    fourth = (pow(radians,7)) / (factorial(7));
    fifth = (pow(radians,9)) / (factorial(9));
    sixth = (pow(radians,11)) / (factorial(11));
    seventh = (pow(radians,13)) / (factorial(13));
    eighth = (pow(radians,15)) / (factorial(15));
    ninth = (pow(radians,17)) / (factorial(17));
    tenth = (pow(radians,19)) / (factorial(19));
    answer = first - second + third - fourth + fifth - sixth + seventh - eighth + ninth - tenth;

    return answer;
}

// Cosine function 
double cosine(double n)
{
    double answer;
    double first, second, third, fourth, fifth, sixth, seventh, eighth, ninth;
    double radians;
    const double PI = 3.14159265359; 

    radians = n * (PI / 180);
    first = (pow(radians,2)) / (factorial(2));
    second = (pow(radians,4)) / (factorial(4));
    third = (pow(radians,6)) / (factorial(6));
    fourth = (pow(radians,8)) / (factorial(8));
    fifth = (pow(radians,10)) / (factorial(10));
    sixth = (pow(radians,12)) / (factorial(12));
    seventh = (pow(radians,14)) / (factorial(14));
    eighth = (pow(radians,16)) / (factorial(16));
    ninth = (pow(radians,18)) / (factorial(18));
    answer = 1 - first + second - third + fourth - fifth + sixth - seventh + eighth - ninth;

    return answer;
}

// Tangent function
double tangent(double n)
{
    return sine(n) / cosine(n);
}

// Cosecant function
double cosecant(double n)
{
    return 1 / sine(n);
}

// Secant function
double secant(double n)
{
    return 1 / cosine(n);
}

// Cotangent function
double cotangent(double n)
{
    return 1 / tangent(n);
}

// Logarithm operation function
void logOp()
{
    double value, base;
    cout << "LOGARITHM OPERATION" << endl;
    cout << "Enter the value (>0): ";
    cin >> value;
    cout << "Enter the base (enter 0 for natural log): ";
    cin >> base;

    if (base == 0)
    {
        cout << "ln(" << value << ") = " << naturalLog(value) << endl;
    }
    else
    {
        cout << "log base " << base << " of " << value << " = " << logarithm(value, base) << endl;
    }
}

// Logarithim function 
double logarithm(double value, double base)
{
    if (value <= 0)
    {
        cout << "Error: Logarithm undefined for non-positive values!" << endl;
        return NAN;
    }
    if (base <= 0 || base == 1)
    {
        cout << "Error: Base must be positive and not equal to 1!" << endl;
        return NAN;
    }
    return log(value) / log(base);
}

// Natural log function
double naturalLog(double value)
{
    if (value <= 0)
    {
        cout << "Error: Natural log undefined for non-positive values!" << endl;
        return NAN;
    }
    return log(value);
}

// e^x function
double ePower(double x)
{
    return exp(x);
}
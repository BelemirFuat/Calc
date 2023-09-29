#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int basicCalc()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    cout << "Quotient: " << a / b << endl;
    cout << "Remainder: " << a % b << endl;
    return 0;
}

int enhancedCalc()
{
    cout << "Operators: " << endl;
    cout << "+: Addition(x+y)" << endl;
    cout << "-: Subtraction(x-y)" << endl;
    cout << "*: Multiplication(x*y)" << endl;
    cout << "/: Division(x/y)" << endl;
    cout << "%: Modulus(x%y)" << endl;
    cout << "^: Power(x^y)" << endl;
    cout << "r: Root(x^(y/z))" << endl;
    cout << "d: clean" << endl;
    cout << "q: Quit" << endl;

    float number, number2;
    std::string input;
    char op;
    bool resume = true;
    int i = 1;
    float end = 0;

    while (resume)
    {
        cout << "Enter operator: ";
        cin >> op;
        if (op == 'q')
            exit(1);
        cout << "Enter number " << i << " : ";
        cin >> number;

        if (op == '+')
        {
            if (i == 1)
            {

                cout << "Enter Number " << i + 1 << " : ";
                cin >> number2;
                end = number + number2;
            }
            else
            {

                end += number;
            }
        }
        else if (op == '-')
        {
            if (i == 1)
            {

                cout << "Enter Number " << i + 1 << " : ";
                cin >> number2;
                end = number - number2;
            }
            else
            {

                end -= number;
            }
        }
        else if (op == '*')
        {
            if (i == 1)
            {

                cout << "Enter Number " << i + 1 << " : ";
                cin >> number2;
                end = number * number2;
            }
            else
            {

                end *= number;
            }
        }
        else if (op == '/')
        {
            if (i == 1)
            {

                cout << "Enter Number " << i + 1 << " : ";
                cin >> number2;
                end = number / number2;
            }
            else
            {

                end /= number;
            }
        }
        else if (op == '%')
        {
            if (i == 1)
            {

                cout << "Enter Number " << i + 1 << " : ";
                cin >> number2;
                end = fmod(number, number2);
            }
            else
            {

                end = fmod(end, number);
            }
        }
        else if (op == '^')
        {
            if (i == 1)
            {

                cout << "Enter Number " << i + 1 << " : ";
                cin >> number2;
                end = pow(number, number2);
            }
            else
            {

                end = pow(end, number);
            }
        }
        else if (op == 'r')
        {
            if (i == 1)
            {

                cout << "Enter Number " << i + 1 << " : ";
                cin >> number2;
                end = pow(number, 1 / number2);
            }
            else
            {

                end = pow(end, 1 / number);
            }
        }
        else if (op == 'd')
        {
            end = 0;
            i = -1;
        }
        else
        {
            cout << "Invalid operator" << endl;
        }
        cout << "Result: " << end << endl;
        i++;
    }
}

bool inputControl(float input)
{
    if (typeid(input) == typeid(float))
        return true;
    else
        return false;
}

int main()
{
    enhancedCalc();
}
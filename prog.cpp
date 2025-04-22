#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int dvd(int x, int y)
{
    return x / y;
}

int mod(int x, int y)
{
    return x % y;
}

int main()
{
    int num, num1, num2;

    do
    {
        cout << endl << "----Calculator----" << endl;
        cout << "Press 1 for '+'." << endl;
        cout << "Press 2 for '-'." << endl;
        cout << "Press 3 for '*'." << endl;
        cout << "Press 4 for '/'." << endl;
        cout << "Press 5 for '%'." << endl;
        cout << "Press 0 for 'EXIT'." << endl;
        cout << endl << "Enter your choice: ";
        cin >> num;

        if (num >= 1 && num <= 5)
        {
            cout << endl << "Enter num1: ";
            cin >> num1;

            cout << "Enter num2: ";
            cin >> num2;
        }

        switch (num)
        {
        case 1:
            cout << "Addition of " << num1 << " and " << num2 << " is " << add(num1, num2) << "." << endl;
            break;
        case 2:
            cout << "Subtraction of " << num1 << " and " << num2 << " is " << sub(num1, num2) << "." << endl;
            break;
        case 3:
            cout << "Multiplication of " << num1 << " and " << num2 << " is " << mul(num1, num2) << "." << endl;
            break;
        case 4:
            cout << "Division of " << num1 << " and " << num2 << " is " << dvd(num1, num2) << "." << endl;
            break;
        case 5:
            cout << "Modulo of " << num1 << " and " << num2 << " is " << mod(num1, num2) << "." << endl;
            break;
        case 0:
            cout << endl << "You are successfully exited!";
            break;
        default:
            cout << "Invalid Choice!";
            break;
        }
    } while (num != 0);

    return 0;
}
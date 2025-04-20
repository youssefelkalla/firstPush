#include <iostream>
using namespace std;
int main()
{
    // Main Variables: Declare + Initialize
    double dNum1 = 0; // d for double. Num N capital for camelCasing
    double dNum2 = 0;
    double dResult = 0;
    int iChoice = 0;

    // Goto for retrial
    cout << "\t\t\t\t****Welcome to our Calculator V1 ****\n\n\n\n";
CalculatorStartingPoint: // goto point re back hare

    // Reading 2 numbers and vaildation
    cout << "Please Enter 2 numbers: \n";
    cin >> dNum1 >> dNum2;

    // Input Validation
    if (cin.fail())
    {
        cout << "You should enter correct values\n\n";
        cin.clear();
        cin.ignore(10000, '\n');
        goto CalculatorStartingPoint;
    }

MenuStartingPoint:
    // Display the menu
    cout << "\nMenu Options:\n";
    cout << "\tTo sum the numbers enter 1\n";
    cout << "\tTo subtrack the numbers enter 2\n";
    cout << "\tTo multiply the numbers enter 3\n";
    cout << "\tTo divide the numbers enter 4\n";
    cout << "\tTo enter the 2 numbers again, enter 5\n";

    cout << "\n\tEnter the choice: ";
    cin >> iChoice;

    // Input Validation
    if (cin.fail())
    {
        cout << "\t\tYou should enter correct value\n\n";
        cin.clear();
        cin.ignore(10000, '\n');
        goto MenuStartingPoint;
    }

    // Let check for the result
    if (iChoice == 1)
    {
        dResult = dNum1 + dNum2;
    }
    else if (iChoice == 2)
    {
        dResult = dNum1 - dNum2;
    }
    else if (iChoice == 3)
    {
        dResult = dNum1 * dNum2;
    }
    else if (iChoice == 4)
    {
        if (dNum2 == 0.0)
        {
            cout << "\t\tWe can't divide by zero. Retry other 2 numbers\n\n";
            goto CalculatorStartingPoint;
        }
        dResult = dNum1 / dNum2;
    }
    else if (iChoice == 5)
    {
        goto CalculatorStartingPoint;
    }
    else
    {
        cout << "\t\tChice must be from 1 to 5. Retry again\n\n";
        goto MenuStartingPoint;
    }
    cout << "\nResult of operation: " << dResult << "\n";

    return 0;
}
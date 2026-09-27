#include <iostream>   // Standard input-output stream
#include <iomanip>    // For formatted output (setw)
using namespace std;

int main()
{
    // Display system header
    cout << "************************************************" << endl;
    cout << "Student Record Management System" << endl;
    cout << "************************************************" << endl;
    cout << endl;

    // Academic summary section
    cout << "-------------------------------------------------" << endl;
    cout << "Academic Summary" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << endl;

    int Marks;          // Total marks entered by the user
    float percentage;   // Average marks / percentage

    // Input validation using goto label
M:  cout << left << setw(18) << "Total Marks" << ": ";
    cin >> Marks;

    // Check for valid marks (between 0 and 300)
    if (Marks < 0 || Marks > 300)
    {
        cout << "Error: Invalid input" << endl;
        goto M; // Repeat input if invalid
    }
    else
    {
        // Calculate average and percentage
        percentage = Marks / 3.0; // Divide by 3 subjects

        cout << left << setw(18) << "Average marks" << ": " << percentage << endl;
        cout << left << setw(18) << "Total percentage" << ": " << percentage << "%" << endl;
        cout << endl;

        // Academic result section
        cout << "-------------------------------------------------" << endl;
        cout << "Academic Result" << endl;
        cout << "-------------------------------------------------" << endl;
        cout << endl;
    }

    // Display pass/fail result
    if (percentage < 33)
    {
        cout << "Result : Fail" << endl;
    }
    else
    {
        cout << "Result : Pass" << endl;
        cout << endl;
        cout << "Congratulations! You have successfully passed." << endl;
        cout << "----------------------------------------------" << endl;
    }

    return 0;
}


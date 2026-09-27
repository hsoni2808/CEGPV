#include <iostream>   // Standard input-output stream
#include <iomanip>    // For formatted output (setw)
using namespace std;

int main()
{
    int Marks;          // Total marks entered by the user
    float percentage;   // Average marks / percentage

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

    // Input validation using goto label
M:  cout << left << setw(18) << "Total Marks" << ": ";
    cin >> Marks;

    // Check for valid marks (between 0 and 300)
    if (Marks < 0 || Marks > 300)
    {
        cout << "Error: invalid output" << endl;
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
        cout << left << setw(18) << "Result" << ": Fail" << endl;
    }
    else
    {
        cout << left << setw(18) << "Result" << ": Pass" << endl;
        cout << endl;
    }

    // Grade and performance evaluation
    // NOTE: Use '&&' (AND) for ranges instead of '||' (OR)
    if (percentage >= 90 && percentage <= 100)   // Outstanding
    {
        cout << left << setw(18) << "Grade" << ": O" << endl;
        cout << left << setw(18) << "Performance" << ": Outstanding" << endl;
    }
    else if (percentage >= 80 && percentage <= 89)   // Excellent
    {
        cout << left << setw(18) << "Grade" << ": A+" << endl;
        cout << left << setw(18) << "Performance" << ": Excellent" << endl;
    }
    else if (percentage >= 70 && percentage <= 79)   // Very Good
    {
        cout << left << setw(18) << "Grade" << ": A" << endl;
        cout << left << setw(18) << "Performance" << ": Very Good" << endl;
    }
    else if (percentage >= 60 && percentage <= 69)   // Good
    {
        cout << left << setw(18) << "Grade" << ": B+" << endl;
        cout << left << setw(18) << "Performance" << ": Good" << endl;
    }
    else if (percentage >= 50 && percentage <= 59)   // Satisfactory
    {
        cout << left << setw(18) << "Grade" << ": B" << endl;
        cout << left << setw(18) << "Performance" << ": Satisfactory" << endl;
    }
    else if (percentage >= 40 && percentage <= 49)   // Needs Improvement
    {
        cout << left << setw(18) << "Grade" << ": C" << endl;
        cout << left << setw(18) << "Performance" << ": Needs Improvement" << endl;
    }
    else   // Fail
    {
        cout << left << setw(18) << "Grade" << ": F" << endl;
        cout << left << setw(18) << "Performance" << ": Fail" << endl;
    }

    return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Display system header
    cout << "**************************************************" << endl;
    cout << "Student Record Management System" << endl;
    cout << "**************************************************" << endl;
    cout << endl;

    // Variable declarations
    float Percentage;   // Percentage of marks
    int Marks;          // Marks for each subject
    int i, n;           // Loop counter and number of subjects
    int Total;          // Total marks

    // Input number of subjects
    cout << left << setw(25) << "Enter number of subjects" << ": ";
    cin >> n;

    // Input marks for each subject
    for (i = 1; i <= n; i++)
    {
        cout << left << setw(25) << "Enter marks for subject " << i << ": ";
        cin >> Marks;
        Total = Total + Marks; // Add marks to total
    }

    cout << endl;

    // Academic summary section
    cout << "-------------------------------------------------" << endl;
    cout << "Academic Summary" << endl;
    cout << "-------------------------------------------------" << endl;

M:  // Label for validation
    cout << left << setw(18) << "Total Marks" << ": " << Total;

    // Validate total marks
    if (Total < 0 || Total > 500)
    {
        cout << "Error: invalid output" << endl;
        goto M; // Repeat if invalid
    }
    else
    {
        // Calculate percentage (assuming 5 subjects for division)
        Percentage = Total / 5.0;

        cout << endl;
        cout << left << setw(18) << "Average marks" << ": " << Percentage << endl;
        cout << left << setw(18) << "Total percentage" << ": " << Percentage << "%" << endl;
        cout << endl;

        // Academic result section
        cout << "-------------------------------------------------" << endl;
        cout << "Academic Result" << endl;
        cout << "-------------------------------------------------" << endl;
        cout << endl;
    }

    // Pass/Fail result
    if (Percentage < 33)
    {
        cout << "Result: Fail" << endl;
    }
    else
    {
        cout << left << setw(18) << "Result" << ": Pass" << endl;
        cout << endl;
    }

    // Grade and performance evaluation using AND (&&) for ranges
    if (Percentage >= 90 && Percentage <= 100)
    {
        cout << left << setw(18) << "Grade" << ": O" << endl;
        cout << left << setw(18) << "Performance" << ": Outstanding" << endl;
    }
    else if (Percentage >= 80 && Percentage <= 89)
    {
        cout << left << setw(18) << "Grade" << ": A+" << endl;
        cout << left << setw(18) << "Performance" << ": Excellent" << endl;
    }
    else if (Percentage >= 70 && Percentage <= 79)
    {
        cout << left << setw(18) << "Grade" << ": A" << endl;
        cout << left << setw(18) << "Performance" << ": Very Good" << endl;
    }
    else if (Percentage >= 60 && Percentage <= 69)
    {
        cout << left << setw(18) << "Grade" << ": B+" << endl;
        cout << left << setw(18) << "Performance" << ": Good" << endl;
    }
    else if (Percentage >= 50 && Percentage <= 59)
    {
        cout << left << setw(18) << "Grade" << ": B" << endl;
        cout << left << setw(18) << "Performance" << ": Satisfactory" << endl;
    }
    else if (Percentage >= 40 && Percentage <= 49)
    {
        cout << left << setw(18) << "Grade" << ": C" << endl;
        cout << left << setw(18) << "Performance" << ": Needs Improvement" << endl;
    }
    else
    {
        cout << left << setw(18) << "Grade" << ": F" << endl;
        cout << left << setw(18) << "Performance" << ": Fail" << endl;
    }

    return 0;
}

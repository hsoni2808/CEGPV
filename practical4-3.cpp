#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Student details
    string enrollmentNo;   // Enrollment number
    string studentName;    // Student name
    string branchName;     // Branch
    short int semester;    // Semester
    long int mobileNo;     // Mobile number

    // Academic marks
    int mathsMarks = 0;        // Mathematics marks
    int physicsMarks = 0;      // Physics marks
    int programmingMarks = 0;  // Programming foundation marks
    int totalMarks = 0;        // Total marks
    float percentage = 0;      // Percentage

    int choice; // Menu choice

    // Display system header
    cout << "***********************************************" << endl;
    cout << "Student Record Management System" << endl;
    cout << "***********************************************" << endl;
    cout << endl;

Menu: // Label for menu loop
    // Display menu
    cout << "---------------------- Main Menu -----------------" << endl;
    cout << "1. Register new student" << endl;
    cout << "2. Display student record" << endl;
    cout << "3. Enter student marks" << endl;
    cout << "4. Display academic result" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice < 1 || choice > 5)
    {
        cout << "Invalid choice" << endl;
        goto Menu;
    }

    switch (choice)
    {
        case 1: // Register new student
            cout << "-----------------------------------" << endl;
            cout << "Student Registration" << endl;
            cout << "-----------------------------------" << endl;

            cout << left << setw(34) << "Enter enrollment number" << ": ";
            cin >> enrollmentNo;
            cin.ignore();
            cout << left << setw(34) << "Enter student name" << ": ";
            getline(cin, studentName);
            cout << left << setw(34) << "Enter branch" << ": ";
            cin >> branchName;
            cout << left << setw(34) << "Enter semester" << ": ";
            cin >> semester;
            cout << left << setw(34) << "Enter mobile number" << ": ";
            cin >> mobileNo;

            cout << endl << "Student registered successfully" << endl;
            goto Menu;

        case 2: // Display student record
            cout << "-------------------------------------------" << endl;
            cout << "Student Information" << endl;
            cout << "-------------------------------------------" << endl;

            cout << left << setw(34) << "Enrollment number" << ": " << enrollmentNo << endl;
            cout << left << setw(34) << "Student name" << ": " << studentName << endl;
            cout << left << setw(34) << "Branch" << ": " << branchName << endl;
            cout << left << setw(34) << "Semester" << ": " << semester << endl;
            cout << left << setw(34) << "Mobile number" << ": " << mobileNo << endl;
            cout << endl;
            goto Menu;

        case 3: // Enter student marks
            cout << "-------------------------------------------" << endl;
            cout << "Academic Information" << endl;
            cout << "-------------------------------------------" << endl;

            cout << left << setw(34) << "Enter mathematics marks" << ": ";
            cin >> mathsMarks;
            cout << left << setw(34) << "Enter physics marks" << ": ";
            cin >> physicsMarks;
            cout << left << setw(34) << "Enter programming foundation marks" << ": ";
            cin >> programmingMarks;

            cout << "Marks entered successfully" << endl;
            goto Menu;

        case 4: // Display academic result
            cout << "-------------------------------------------------" << endl;
            cout << "Academic Summary" << endl;
            cout << "-------------------------------------------------" << endl;

            totalMarks = mathsMarks + physicsMarks + programmingMarks;
            cout << left << setw(18) << "Total Marks" << ": " << totalMarks << endl;

            if (totalMarks < 0 || totalMarks > 500)
            {
                cout << "Error: invalid output" << endl;
                goto Menu;
            }
            else
            {
                percentage = totalMarks / 5.0; // Example calculation
                cout << left << setw(18) << "Average marks" << ": " << percentage << endl;
                cout << left << setw(18) << "Total percentage" << ": " << percentage << "%" << endl;
                cout << endl;

                cout << "-------------------------------------------------" << endl;
                cout << "Academic Result" << endl;
                cout << "-------------------------------------------------" << endl;
            }

            // Pass/Fail result
            if (percentage < 33)
            {
                cout << "Result: Fail" << endl;
            }
            else
            {
                cout << left << setw(18) << "Result" << ": Pass" << endl;
            }

            // Grade and performance evaluation using AND (&&) for ranges
            if (percentage >= 90 && percentage <= 100)
            {
                cout << left << setw(18) << "Grade" << ": O" << endl;
                cout << left << setw(18) << "Performance" << ": Outstanding" << endl;
            }
            else if (percentage >= 80 && percentage <= 89)
            {
                cout << left << setw(18) << "Grade" << ": A+" << endl;
                cout << left << setw(18) << "Performance" << ": Excellent" << endl;
            }
            else if (percentage >= 70 && percentage <= 79)
            {
                cout << left << setw(18) << "Grade" << ": A" << endl;
                cout << left << setw(18) << "Performance" << ": Very Good" << endl;
            }
            else if (percentage >= 60 && percentage <= 69)
            {
                cout << left << setw(18) << "Grade" << ": B+" << endl;
                cout << left << setw(18) << "Performance" << ": Good" << endl;
            }
            else if (percentage >= 50 && percentage <= 59)
            {
                cout << left << setw(18) << "Grade" << ": B" << endl;
                cout << left << setw(18) << "Performance" << ": Satisfactory" << endl;
            }
            else if (percentage >= 40 && percentage <= 49)
            {
                cout << left << setw(18) << "Grade" << ": C" << endl;
                cout << left << setw(18) << "Performance" << ": Needs Improvement" << endl;
            }
            else
            {
                cout << left << setw(18) << "Grade" << ": F" << endl;
                cout << left << setw(18) << "Performance" << ": Fail" << endl;
            }
            goto Menu;

        case 5: // Exit program
            cout << "Exit" << endl;
            break;
    }

    return 0;
}






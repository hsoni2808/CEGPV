#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Student details
    string Enroll_no;   // Enrollment number
    string Stu_name;    // Student name
    string Branch;      // Branch
    short int Semester; // Semester
    long int Mobile_no; // Mobile number

    // Academic marks
    int Maths;      // Mathematics marks
    int Phy;        // Physics marks
    int CPF;        // Programming foundation marks
    int Total;      // Total marks
    float Percentage; // Percentage

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
            cin >> Enroll_no;
            cin.ignore();
            cout << left << setw(34) << "Enter student name" << ": ";
            getline(cin, Stu_name);
            cout << left << setw(34) << "Enter branch" << ": ";
            cin >> Branch;
            cout << left << setw(34) << "Enter semester" << ": ";
            cin >> Semester;
            cout << left << setw(34) << "Enter mobile number" << ": ";
            cin >> Mobile_no;

            cout << endl << "Student registered successfully" << endl;
            goto Menu;

        case 2: // Display student record
            cout << "-------------------------------------------" << endl;
            cout << "Student Information" << endl;
            cout << "-------------------------------------------" << endl;

            cout << left << setw(34) << "Enrollment number" << ": " << Enroll_no << endl;
            cout << left << setw(34) << "Student name" << ": " << Stu_name << endl;
            cout << left << setw(34) << "Branch" << ": " << Branch << endl;
            cout << left << setw(34) << "Semester" << ": " << Semester << endl;
            cout << left << setw(34) << "Mobile number" << ": " << Mobile_no << endl;
            cout << endl;
            goto Menu;

        case 3: // Enter student marks
            cout << "-------------------------------------------" << endl;
            cout << "Academic Information" << endl;
            cout << "-------------------------------------------" << endl;

            cout << left << setw(34) << "Enter mathematics marks" << ": ";
            cin >> Maths;
            cout << left << setw(34) << "Enter physics marks" << ": ";
            cin >> Phy;
            cout << left << setw(34) << "Enter programming foundation marks" << ": ";
            cin >> CPF;

            cout << "Marks entered successfully" << endl;
            goto Menu;

        case 4: // Display academic result
            cout << "-------------------------------------------------" << endl;
            cout << "Academic Summary" << endl;
            cout << "-------------------------------------------------" << endl;

            Total = Maths + Phy + CPF;
            cout << left << setw(18) << "Total Marks" << ": " << Total << endl;

            if (Total < 0 || Total > 500)
            {
                cout << "Error: invalid output" << endl;
                goto Menu;
            }
            else
            {
                Percentage = Total / 5.0; // Example calculation
                cout << left << setw(18) << "Average marks" << ": " << Percentage << endl;
                cout << left << setw(18) << "Total percentage" << ": " << Percentage << "%" << endl;
                cout << endl;

                cout << "-------------------------------------------------" << endl;
                cout << "Academic Result" << endl;
                cout << "-------------------------------------------------" << endl;
            }

            // Pass/Fail result
            if (Percentage < 33)
            {
                cout << "Result: Fail" << endl;
            }
            else
            {
                cout << left << setw(18) << "Result" << ": Pass" << endl;
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
            goto Menu;

        case 5: // Exit program
            cout << "Exit" << endl;
            break;
    }

    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare variables for student details
    char Choice;             // User choice for continuing registration
    string Enroll_no;        // Enrollment number
    string Stu_name;         // Student name
    string Branch;           // Branch name
    short int Semester;      // Semester number
    long int Mobile_no;      // Mobile number

    // Display system header
    cout << "*******************************************" << endl;
    cout << "Student Record Management System" << endl;
    cout << "*******************************************" << endl;
    cout << endl;

    // Student registration section
    cout << "Student Registration" << endl;
    cout << "-------------------------------------------" << endl;
    cout << endl;

    // Entry loop for multiple students
    while (true)
    {
        // Input student details
        cout << left << setw(32) << "Enter enrollment number" << ": ";
        cin >> Enroll_no;
        cin.ignore(); // Clear buffer for getline

        cout << left << setw(32) << "Enter student name" << ": ";
        getline(cin, Stu_name);

        cout << left << setw(32) << "Enter branch" << ": ";
        cin >> Branch;

        cout << left << setw(32) << "Enter semester" << ": ";
        cin >> Semester;

        cout << left << setw(32) << "Enter mobile number" << ": ";
        cin >> Mobile_no;

        // Confirmation message
        cout << "Student has registered successfully." << endl;

        // Ask if user wants to register another student
        cout << "Do you want to register another student (Y/N)? ";
        cin >> Choice;
        cout << "-------------------------------------------" << endl;

        // Exit condition
        if (Choice == 'N' || Choice == 'n')
        {
            cout << "Exiting registration..." << endl;
            break;
        }
    }

    return 0;
}

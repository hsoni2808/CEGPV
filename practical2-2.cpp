#include <iostream>   // Standard input-output stream
#include <iomanip>    // For formatted output (setw)
using namespace std;

int main() // Main function
{
    // Display university and system details
    cout << "***************************************" << endl;
    cout << "Student Record Management System" << endl;
    cout << "***************************************" << endl;
    cout << endl;
    cout << "Software Version: 1.1" << endl;
    cout << "Institute: Charusat University" << endl;
    cout << "Academic Year: 2026-27" << endl;
    cout << endl;

    // Section header for student registration
    cout << "----------------------------------------" << endl;
    cout << "Student Registration" << endl;
    cout << "----------------------------------------" << endl;

    // Declare variables for student details
    string Enroll_no;   // Enrollment number
    string Branch;      // Branch name
    string Stu_name;    // Student name
    short int sem;      // Semester number
    int Mobile_no;      // Mobile number

    // Input student details
    cout << left << setw(25) << "Enter enrollment number" << ": ";
    cin >> Enroll_no;

    cin.ignore(); // Clear input buffer before getline
    cout << left << setw(25) << "Enter student name" << ": ";
    getline(cin, Stu_name);

    cout << left << setw(25) << "Enter branch" << ": ";
    cin >> Branch;

    cout << left << setw(25) << "Enter semester" << ": ";
    cin >> sem;

    cout << left << setw(25) << "Enter mobile number" << ": ";
    cin >> Mobile_no;

    // Section header for displaying student information
    cout << "----------------------------------------" << endl;
    cout << "Student Information" << endl;
    cout << "----------------------------------------" << endl;
    cout << endl;

    // Print the student information
    cout << left << setw(25) << "Enrollment number" << ": " << Enroll_no << endl;
    cout << left << setw(25) << "Student name" << ": " << Stu_name << endl;
    cout << left << setw(25) << "Branch" << ": " << Branch << endl;
    cout << left << setw(25) << "Semester number" << ": " << sem << endl;
    cout << left << setw(25) << "Mobile number" << ": " << Mobile_no << endl;

    cout << "---------------------------------------" << endl;

    return 0;
}


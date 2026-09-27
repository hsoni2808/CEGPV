#include <iostream>   // Standard input-output stream
#include <iomanip>    // For formatted output (setw)
using namespace std; 

int main() 
{
    // Display system header
    cout << "*******************************" << endl;
    cout << "Student Record Management System" << endl;
    cout << "*******************************" << endl;
    cout << endl;

    // Declare variables for student details
    string Enroll_no;     // Enrollment number
    string Stu_name;      // Student name
    string Branch;        // Branch name
    int Sem;              // Semester number
    long int Mobile_no;   // Mobile number

    // Input student details
    cout << "Enter enrollment number: ";
    cin >> Enroll_no;

    cout << "Enter student name: ";
    cin >> Stu_name;

    cin.ignore(); // Clear input buffer before getline
    cout << "Enter branch: ";
    getline(cin, Branch);

    cout << "Enter semester: ";
    cin >> Sem;

    cout << "Enter mobile number: ";
    cin >> Mobile_no;

    // Display student information
    cout << "----------------------------------" << endl;
    cout << "Student Information" << setw(5) << endl;
    cout << "----------------------------------" << endl;

    cout << "Enrollment number: " << Enroll_no << endl;
    cout << "Student name: " << Stu_name << endl;
    cout << "Branch: " << Branch << endl;
    cout << "Semester: " << Sem << endl;
    cout << "Mobile number: " << Mobile_no << endl;

    cout << "----------------------------------" << endl;

    return 0;
}


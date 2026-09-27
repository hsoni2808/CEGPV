#include <iostream>   // Standard input-output stream
#include <iomanip>    // For formatted output (setw, setprecision)
using namespace std;

int main()
{
    // Display system header
    cout << "*******************************************" << endl;
    cout << "Student Record Management System" << endl;
    cout << "*******************************************" << endl;
    cout << "Software Version:" << setw(5) << "1.2" << endl;

    // Student registration section
    cout << "--------------------------------------------" << endl;
    cout << "Student Registration" << endl;
    cout << "--------------------------------------------" << endl;

    // Declare variables for student details
    string Enroll_no;        // Enrollment number
    string Stu_name;        // Student name
    string Branch;        // Branch
    short int Sem;   // Semester
    long int Mobile_no;      // Mobile number

    // Input student details
    cout << left << setw(32) << "Enter enrollment number" << ": ";
    cin >> Enroll_no;

    cin.ignore(); // Clear buffer before getline
    cout << left << setw(32) << "Enter student name" << ": ";
    getline(cin, Stu_name);

    cout << left << setw(32) << "Enter branch" << ": ";
    cin >> Branch;

    cout << left << setw(32) << "Enter semester" << ": ";
    cin >> Sem;

    cout << left << setw(32) << "Enter mobile number" << ": ";
    cin >> Mobile_no;

    // Academic information section
    cout << "-------------------------------------------" << endl;
    cout << "Academic Information" << endl;
    cout << "-------------------------------------------" << endl;

    int Maths;    // Mathematics marks
    int Phy;    // Physics marks
    int CPF;  // Programming foundation marks

    cout << left << setw(32) << "Enter mathematics marks" << ": ";
    cin >> Maths;
    cout << left << setw(32) << "Enter physics marks" << ": ";
    cin >> Phy;
    cout << left << setw(32) << "Enter programming foundation marks" << ": ";
    cin >> CPF;

    // Academic summary section
    cout << "-------------------------------------------" << endl;
    cout << "Academic Summary" << endl;
    cout << "-------------------------------------------" << endl;

    int Total = Maths + Phy + CPF;              // Total marks
    float Avg = (float)Total / 3; // Average marks

    cout << left << setw(32) << "Total marks" << ": " << Total << endl;
    cout << left << setw(32) << "Average marks" << ": " 
         << fixed << setprecision(2) << Avg << endl;
    cout << left << setw(32) << "Percentage" << ": " 
         << fixed << setprecision(2) << Avg << "%" << endl;

    // Student information section
    cout << "-------------------------------------------" << endl;
    cout << "Student Information" << endl;
    cout << "-------------------------------------------" << endl;

    cout << left << setw(32) << "Enrollment number" << ": " << Enroll_no << endl;
    cout << left << setw(32) << "Student name" << ": " << Stu_name << endl;
    cout << left << setw(32) << "Branch" << ": " << Branch << endl;
    cout << left << setw(32) << "Semester" << ": " << Sem << endl;
    cout << left << setw(32) << "Mobile number" << ": " << Mobile_no<< endl;
    cout << endl;

    // Demonstrating increment/decrement operators
    cout << "Increment/Decrement Demonstrations" << endl;
    cout << "-------------------------------------------" << endl;

    // Mathematics
    cout << "Pre-increment (Maths): " << ++Maths << endl;
    cout << Maths << endl;
    cout << "Post-increment (Maths): " << Maths++ << endl;
    cout << Maths << endl;
    cout << "Pre-decrement (Maths): " << --Maths << endl;
    cout << Maths << endl;
    cout << "Post-decrement (Maths): " << Maths-- << endl;
    cout << Maths << endl;
    cout << endl;

    // Physics
    cout << "Pre-increment (Physics): " << ++Phy << endl;
    cout << Phy << endl;
    cout << "Post-increment (Physics): " << Phy++ << endl;
    cout << Phy << endl;
    cout << "Pre-decrement (Physics): " << --Phy << endl;
    cout << Phy << endl;
    cout << "Post-decrement (Physics): " << Phy-- << endl;
    cout << Phy << endl;
    cout << endl;

    // Programming Foundation
    cout << "Pre-increment (Programming Foundation): " << ++CPF << endl;
    cout << CPF << endl;
    cout << "Post-increment (Programming Foundation): " << CPF++ << endl;
    cout << CPF << endl;
    cout << "Pre-decrement (Programming Foundation): " << --CPF << endl;
    cout << CPF << endl;
    cout << "Post-decrement (Programming Foundation): " << CPF-- << endl;
    cout << CPF << endl;
    cout << endl;

    return 0;
}


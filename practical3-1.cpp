#include <iostream>   // Standard input-output stream
#include <iomanip>    // For formatted output (setw, setprecision)
using namespace std;

int main() 
{    
    // Declare variables for student details
    string Enroll_no;     // Enrollment number
    string Stu_name;      // Student name
    string Branch;        // Branch name
    short int Sem;        // Semester number
    long int Mobile_no;   // Mobile number

    // Declare variables for academic marks
    int Maths;            // Mathematics marks
    int Phy;              // Physics marks
    int CPF;              // Programming foundation marks
    int Total;            // Total marks
    float Avg;            // Average marks

    // Display system header
    cout << "*******************************************" << endl;
    cout << "Student Record Management System" << endl;
    cout << "*******************************************" << endl;
    cout << "Software Version:" << setw(5) << "1.2" << endl;

    // Student registration section
    cout << "--------------------------------------------" << endl;
    cout << "Student Registration" << endl;
    cout << "--------------------------------------------" << endl;

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

    // Calculate total and average
    Total = Maths + Phy + CPF;
    Avg = (float)Total / 3; // Convert int to float for average

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
    cout << left << setw(32) << "Mobile number" << ": " << Mobile_no << endl;

    cout << "-------------------------------------------" << endl;

    return 0;
}


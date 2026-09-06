#include<iostream> // Header file //
using namespace std;
int main() // Main function //
{
    // describing university details //
    cout<<"***************************************"<<endl;
    cout<<"Student record management system"<<endl;
    cout<<"***************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"software version:1.1"<<endl;
    cout<<"Institute:Charusat University"<<endl;
    cout<<"Academic year:2026-27"<<endl;
    cout<<endl;
    cout<<endl;
    
    cout<<"----------------------------------------"<<endl;
    cout<<"Student Registration"<<endl;
    cout<<"----------------------------------------"<<endl;
    // assigning variable names to data type //
    string Enroll_no;
    string Branch;
    string Stu_name;
    short int sem;
    int Mobile_no;
    // Input Student details //
    cout<<"Enter enrollment number:";
    cin>>Enroll_no;
    cin.ignore();
    cout<<" Enter Student name:";
    getline(cin,Stu_name);
    cout<<" Enter Branch:";
    cin>>Branch;
    cout<<" Enter Semester:";
    cin>>sem;
    cout<<" Enter Mobile number:";
    cin>>Mobile_no;
    cout<<"----------------------------------------"<<endl;
    cout<<"Student Information"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    // print the student Information //
    cout<<"Enter enrollnment number:"<<Enroll_no<<endl;
    cout<<"Enter student name:"<<Stu_name<<endl;
    cout<<"Enter branch:"<<Branch<<endl;
    cout<<"Enter semester number:"<<sem<<endl;
    cout<<"Enter mobile number:"<<Mobile_no<<endl;
    cout<<"---------------------------------------"<<endl;
    return 0;

}

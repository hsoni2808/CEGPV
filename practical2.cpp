#include <iostream> // Header file //
#include <iomanip>
using namespace std; 
int main() // Main function //
{
    cout<<"*******************************"<<endl;
    cout<<"Student record management system"<<endl;
    cout<<"*******************************"<<endl;
    cout<<endl;
    cout<<endl;
     string Enroll_no;
     string Stu_name;
     string Branch;
     int Sem;
     long int Mobile_no;
    // Enter student details //
     cout<<"enter enrollement number:";
     cin>> Enroll_no;
     cout<<"enter student name:";
     cin>>Stu_name;
     cin.ignore();
     cout<<"enter branch:";
     getline(cin,Branch);
     cout<<"enter semester:";
     cin>>Sem;
     cout<<"enter mobile number:";
     cin>>Mobile_no;

      cout<<"----------------------------------"<<endl;
    cout<<"student information "<<setw(5)<<endl;
    cout<<"----------------------------------"<<endl;
    // print the details //
    cout<<"Enter enrollment number:"<< Enroll_no <<endl;
     cout<<"Enter student name:"<<Stu_name<<endl;
      cout<<"Enter branch:"<<Branch<<endl;
       cout<<"Enter semester:"<<Sem<<endl;
        cout<<"Enter mobile number:"<<Mobile_no<<endl;

    cout<<"----------------------------------"<<endl;
        return 0;
    }

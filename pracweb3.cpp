#include <iostream> // Header file //
#include <iomanip> // Required For Formatting the output //
using namespace std;
int main() 
{    

    // assigning the variable to datatype //
    string Enroll_no;
    string Stu_name;
    string Branch;
    short int Sem;
    long int Mobile_no;
    int Maths;
    int Phy;
    int CPF;
    int Total;
    float Avg;
    // printing university details //
    cout<<"*******************************************"<<endl;
    cout<<"Student record management system"<<endl;
    cout<<"*******************************************"<<endl;

    cout<<"software version:"<<setw(5)<<"1.2"<<endl;
    
    cout<<"--------------------------------------------"<<endl;
    cout<<"student registration"<<setw(5)<<endl;
    cout<<"--------------------------------------------"<<endl;
  
    // Input the student details and also the use of setw //
    cout<<left<<setw(32)<<"enter enrollement number"<<": ";
    cin>>Enroll_no;
    cin.ignore();
    cout<<left<<setw(32)<<"enter student name"<<": ";
    getline(cin,Stu_name);
    cout<<left<<setw(32)<<"enter branch"<<": ";
    cin>>Branch;
    cout<<left<<setw(32)<<"enter semester"<<": ";
    cin>>Sem;
    cout<<left<<setw(32)<<"enter mobile number"<<": ";
    cin>>Mobile_no;

    cout<<"-------------------------------------------"<<endl;
    cout<<"Academic information"<<setw(5)<<endl;
    cout<<"-----------------------------------------------"<<endl;
    // Input the Academic information //

    cout<<left<<setw(32)<<"enter  mathematics marks"<<": ";
    cin>>Maths;
    cout<<left<<setw(32)<<"enter physics marks"<<": ";
    cin>>Phy;
    cout<<left<<setw(32)<<"enter programming foundation marks"<<": ";
    cin>>CPF;

    cout<<"------------------------------------------"<<endl;
    cout<<"Academic summary"<<setw(5)<<endl;
    cout<<"---------------------------------------------"<<endl;

    // calculating total marks and percentage also use of setprecision //
  
    Total=M+P+CPF;
    cout<<left<<setw(32)<<"total marks"<<": "<<Total<<endl;
   
    Avg=(float)T/3;
    // to convert int to float //
    cout<<left<<setw(32)<<"average marks"<<": "<<Avg<<setprecision(4)<<endl;
    cout<<left<<setw(32)<<"percentage"<<": "<<Avg<<"%"<<setprecision(4)<<endl;

    cout<<"-------------------------------------------"<<endl;
    cout<<"student information"<<setw(5)<<endl;
    cout<<"---------------------------------------------"<<endl;

     // printing student details //
    cout<<left<<setw(32)<<"enter enrollment number"<<": "<<Enroll_no<<endl;
    cout<<left<<setw(32)<<"enter student name"<<": "<<Stu_name<<endl;
    cout<<left<<setw(32)<<"enter branch"<<": "<<Branch<<endl;
    cout<<left<<setw(32)<<"enter semester"<<": "<<Sem<<endl;
    cout<<left<<setw(32)<<"enter mobile number"<<": "<<Mobile_no<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"-----------------------------------------"<<endl;
    return 0;









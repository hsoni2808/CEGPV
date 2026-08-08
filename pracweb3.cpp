#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<"*******************************************"<<endl;
    cout<<"Student record management system"<<endl;
    cout<<"*******************************************"<<endl;

    cout<<"software version:"<<setw(5)<<"1.2"<<endl;

    cout<<"--------------------------------------------"<<endl;
    cout<<"student registration"<<setw(5)<<endl;
    cout<<"--------------------------------------------"<<endl;

    string E;
    string S;
    string B;
    short int Sem;
    long int N;
    cout<<left<<setw(32)<<"enter enrollement number"<<": ";
    cin>>E;
    cin.ignore();
    cout<<left<<setw(32)<<"enter student name"<<": ";
    getline(cin,S);
    cout<<left<<setw(32)<<"enter branch"<<": ";
    cin>>B;
    cout<<left<<setw(32)<<"enter semester"<<": ";
    cin>>Sem;
    cout<<left<<setw(32)<<"enter mobile number"<<": ";
    cin>>N;

    cout<<"-------------------------------------------"<<endl;
    cout<<"Academic information"<<setw(5)<<endl;
    cout<<"-----------------------------------------------"<<endl;

    int M;
    int P;
    int CPF;

    cout<<left<<setw(32)<<"enter  mathematics marks"<<": ";
    cin>>M;
    cout<<left<<setw(32)<<"enter physics marks"<<": ";
    cin>>P;
    cout<<left<<setw(32)<<"enter programming foundation marks"<<": ";
    cin>>CPF;

    cout<<"------------------------------------------"<<endl;
    cout<<"Academic summary"<<setw(5)<<endl;
    cout<<"---------------------------------------------"<<endl;

    int T;
    T=M+P+CPF;
    cout<<left<<setw(32)<<"total marks"<<": "<<T<<endl;
    float A;
    A=(float)T/3;
    cout<<left<<setw(32)<<"average marks"<<": "<<A<<setprecision(4)<<endl;
    cout<<left<<setw(32)<<"percentage"<<": "<<A<<"%"<<setprecision(4)<<endl;

    cout<<"-------------------------------------------"<<endl;
    cout<<"student information"<<setw(5)<<endl;
    cout<<"---------------------------------------------"<<endl;

    cout<<left<<setw(32)<<"enter enrollment number"<<": "<<E<<endl;
    cout<<left<<setw(32)<<"enter student name"<<": "<<S<<endl;
    cout<<left<<setw(32)<<"enter branch"<<": "<<B<<endl;
    cout<<left<<setw(32)<<"enter semester"<<": "<<Sem<<endl;
    cout<<left<<setw(32)<<"enter mobile number"<<": "<<N<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"-----------------------------------------"<<endl;
    return 0;









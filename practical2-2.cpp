#include<iostream>
using namespace std;
int main()
{
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
    string E;
    string B;
    string S;
    short int sem;
    int M;
    cout<<"Enter enrollment number:";
    cin>>E;
    cin.ignore();
    cout<<" Enter Student name:";
    getline(cin,S);
    cout<<" Enter Branch:";
    cin>>B;
    cout<<" Enter Semester:";
    cin>>sem;
    cout<<" Enter Mobile number:";
    cin>>M;
    cout<<"----------------------------------------"<<endl;
    cout<<"Student Information"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Enter enrollnment number:"<<E<<endl;
    cout<<"Enter student name:"<<S<<endl;
    cout<<"Enter branch:"<<B<<endl;
    cout<<"Enter semester number:"<<sem<<endl;
    cout<<"Enter mobile number:"<<M<<endl;
    cout<<"---------------------------------------"<<endl;
    return 0;

}

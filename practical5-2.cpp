#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //declare the vairable//
    char  Choice;
    string E;
    string S;
    string B;
    short int Sem;
    long int M;
    char N,n;
    //start the student registration//

    cout<<"*******************************************"<<endl;
    cout<<"Student record management system"<<endl;
    cout<<"*******************************************"<<endl;

    cout<<endl;
    cout<<endl;
    cout<<"Student registration"<<endl;
    cout<<endl;
    cout<<endl;
    //entry loop while applied//
    while(true)
    {
        //Enter the student details//
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
        cin>>M;
        cout<<"Student has registerd successfully."<<endl;
        cout<<"Do you want to registor another student(Y/N)? ";
        cin>>Choice;
        cout<<"-------------------------------------";
        cout<<endl;
        //condition if is used//
        if (Choice == 'N'||Choice == 'n')
        {
            //exit theloop//

            cout<<"exit"<<endl;
            break;
        }
    }
}

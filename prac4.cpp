#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
        int Marks;
        float percentage;

        cout<<"************************************************"<<endl;
        cout<<"student record management system"<<endl;
        cout<<"************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"Academic summary"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;

        M:cout<<left<<setw(18)<<"Total Marks"<<": ";
        cin>>Marks;
        if(Marks<0||Marks>300)
        {
            cout<<"Error: invalid output";
            cout<<endl;
            goto M;
        }
        else
        {
        percentage=Marks/3.0;
        cin.ignore();
        cout<<left<<setw(18)<<"Average marks"<<": ";
        cout<<percentage;
        cout<<endl;
        cout<<left<<setw(18)<<"Total percentage"<<": ";
        cout<<percentage;
        cout<<"%";
        cout<<endl;
        cout<<endl;

        cout<<"-------------------------------------------------"<<endl;
        cout<<"Academic result"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        }

        if(percentage<33)
        {
            cout<<"Result : Fail";
        }
        else
        {
            cout<<"Result : pass";
            cout<<endl;
            cout<<endl;
            cout<<"congratulations! You have succesfully passed."<<endl;
            cout<<"----------------------------------------------";
        }
}

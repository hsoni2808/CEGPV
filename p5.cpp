#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<"*******************************"<<endl;
    cout<<"Student record management system"<<endl;
    cout<<"*******************************"<<endl;
    cout<<endl;
    cout<<endl;
     string E;
     string S;
     string B;
     int Sem;
     long int N;
     cout<<"enter enrollement number:";
     cin>>E;
     cout<<"enter student name:";
     cin>>S;
     cin.ignore();
     cout<<"enter branch:";
     getline(cin,B);
     cout<<"enter semester:";
     cin>>Sem;
     cout<<"enter mobile number:";
     cin>>N;

      cout<<"----------------------------------"<<endl;
    cout<<"student information "<<setw(5)<<endl;
    cout<<"----------------------------------"<<endl;

    cout<<"Enter enrollment number:"<<E<<endl;
     cout<<"Enter student name:"<<S<<endl;
      cout<<"Enter branch:"<<B<<endl;
       cout<<"Enter semester:"<<Sem<<endl;
        cout<<"Enter mobile number:"<<N<<endl;

    cout<<"----------------------------------"<<endl;
        return 0;
    }

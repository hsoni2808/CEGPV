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
            cout<<"Result"<<": Fail";
        }
        else
        {
            cout<<left<<setw(18)<<"Result"<<": pass";
            cout<<endl;
            cout<<endl;
        }
        if (percentage>90||percentage<100)
        {
            cout<<left<<setw(18)<<"grade"<<": o"<<endl;
            cout<<left<<setw(18)<<"performance"<<": Outstanding"<<endl;
        }
      else if (percentage>80||percentage<89)
        {
            float percentage;

             cout<<left<<setw(18)<<"grade"<<": A+"<<endl;
            cout<<left<<setw(18)<<"performance"<<": Excellent"<<endl;
        }
    else if (percentage>70||percentage<79)
        {
         float percentage;
            cout<<left<<setw(18)<<"grade"<<": A"<<endl;
            cout<<left<<setw(18)<<"performance"<<": very good"<<endl;
        }
        else if (percentage>60||percentage<69)
    {
        float percentage;

          cout<<left<<setw(18)<<"grade"<<": B+"<<endl;
            cout<<left<<setw(18)<<"performance"<<": good"<<endl;
    }
     else if (percentage>50||percentage<569)
    {
        float percentage;

          cout<<left<<setw(18)<<"grade"<<": B"<<endl;
            cout<<left<<setw(18)<<"performance"<<": Satisfactory"<<endl;
    }
     else if (percentage>40||percentage<49)
    {
        float percentage;

          cout<<left<<setw(18)<<"grade"<<": C"<<endl;
            cout<<left<<setw(18)<<"performance"<<": Needs improvment"<<endl;
    }
     else
    {
        float percentage;

          cout<<left<<setw(18)<<"grade"<<": F"<<endl;
            cout<<left<<setw(18)<<"performance"<<": Fail"<<endl;
    }
}

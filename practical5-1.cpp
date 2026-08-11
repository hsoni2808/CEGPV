#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<"**************************************************"<<endl;
    cout<<"Student record management system"<<endl;
    cout<<"**************************************************"<<endl;
    cout<<endl;
    cout<<endl;
     float percentage;
     int marks,i,n;
     int total=0;
     n=5;
    cout<<left<<setw(25)<<"Enter number of subjects"<<": ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<left<<setw(25)<<"Enter marks for subject"<<(i)<<": ";
        cin>>marks;
        total=total+marks;
    }

        cout<<endl;
        cout<<endl;

    cout<<"-------------------------------------------------"<<endl;
        cout<<"Academic summary"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        M:

            cout<<left<<setw(18)<<"Total Marks"<<": "<<total;
        if(total<0||total>500)
        {
            cout<<"Error: invalid output";
            cout<<endl;
            goto M;
        }
        else
        {
        percentage=total/5.0;
        cin.ignore();
        cout<<endl;
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



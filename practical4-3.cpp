#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int ch;
    float percentage;
    int Marks;
    int M;
    int P;
    int CPF;
    string E;
    string S;
    string B;
    short int Sem;
    long int N;


    cout<<"***********************************************"<<endl;
    cout<<"student record management system"<<endl;
    cout<<"***********************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"----------------------Main menu-----------------"<<endl;
    cout<<endl;
    cout<<endl;
M:
    cout<<"1. Register new student"<<endl;
    cout<<"2. Display student record"<<endl;
    cout<<"3. Enter student marks"<<endl;
    cout<<"4. Display academic result"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your choice"<<": ";
    cin>>ch;

    if (ch<1||ch>5)
    {
        cout<<"Invalid choice";
    }

    switch (ch)
    {
    case 1:
        cout<<"-----------------------------------\n";
        cout<<"Student Registration\n";
        cout<<"-----------------------------------\n";


        cout<<left<<setw(34)<<"enter enrollement number"<<": ";
        cin>>E;
        cin.ignore();
        cout<<left<<setw(34)<<"enter student name"<<": ";
        getline(cin,S);
        cout<<left<<setw(34)<<"enter branch"<<": ";
        cin>>B;
        cout<<left<<setw(34)<<"enter semester"<<": ";
        cin>>Sem;
        cout<<left<<setw(34)<<"enter mobile number"<<": ";
        cin>>N;
        cout<<endl;
        cout<<"student registered succesfully"<<endl;
        goto M;

    case 2:

        cout<<"-------------------------------------------"<<endl;
        cout<<"student information"<<setw(5)<<endl;
        cout<<"---------------------------------------------"<<endl;

        cout<<left<<setw(34)<<"enter enrollment number"<<": "<<E<<endl;
        cout<<left<<setw(34)<<"enter student name"<<": "<<S<<endl;
        cout<<left<<setw(34)<<"enter branch"<<": "<<B<<endl;
        cout<<left<<setw(34)<<"enter semester"<<": "<<Sem<<endl;
        cout<<left<<setw(34)<<"enter mobile number"<<": "<<N<<endl;
        cout<<endl;
        cout<<endl;
        goto M;

    case 3:
        cout<<"-------------------------------------------"<<endl;
        cout<<"Academic information"<<setw(5)<<endl;
        cout<<"-----------------------------------------------"<<endl;


        cout<<left<<setw(34)<<"enter  mathematics marks"<<": ";
        cin>>M;
        cout<<left<<setw(34)<<"enter physics marks"<<": ";
        cin>>P;
        cout<<left<<setw(34)<<"enter programming foundation marks"<<": ";
        cin>>CPF;
        cout<<"Marks entered successfully"<<endl;
        goto M;

    case 4:
        cout<<"-------------------------------------------------"<<endl;
        cout<<"Academic summary"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;

        Marks=M+P+CPF;
        cout<<left<<setw(18)<<"Total Marks"<<": "<<Marks;
        if(Marks<0||Marks>500)
        {
            cout<<"Error: invalid output";
            cout<<endl;
            goto M;
        }
        else
        {
            percentage=Marks/5.0;
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
        goto M;
    case 5:
        cout<<"Exit";
    }
}





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
    int Sem;
    long int N;
    cout<<"enter enrollement number  : "<<setw(5);
    cin>>E;
    cout<<"enter student name        : "<<setw(5);
    cin>>S;
    cout<<"enter branch              : "<<setw(5);
    cin>>B;
    cout<<"enter semester            : "<<setw(5);
    cin>>Sem;
    cout<<"enter mobile number       : "<<setw(5);
    cin>>N;

    cout<<"-------------------------------------------"<<endl;
    cout<<"Academic information"<<setw(5)<<endl;
    cout<<"-----------------------------------------------"<<endl;

    int M;
    int P;
    int F;

    cout<<"enter  mathematics marks          : "<<setw(5);
    cin>>M;
    cout<<"enter physics marks               : "<<setw(5);
    cin>>P;
    cout<<"enter programming foundation marks: "<<setw(5);
    cin>>F;

    cout<<"------------------------------------------"<<endl;
    cout<<"Academic summary"<<setw(5)<<endl;
    cout<<"---------------------------------------------"<<endl;

    int T;
    T=M+P+F;
    cout<<"total marks   : "<<setw(-5)<<T<<endl;
    float A;
    A=(float)T/3;
    cout<<"average marks : "<<setw(-5)<<A<<setprecision(4)<<endl;
    cout<<"percentage    : "<<A<<"%"<<setprecision(4)<<endl;

    cout<<"-------------------------------------------"<<endl;
    cout<<"student information"<<setw(5)<<endl;
    cout<<"---------------------------------------------"<<endl;

    cout<<"enter enrollment number : "<<E<<endl;
    cout<<"enter student name      : "<<S<<endl;
    cout<<"enter branch            : "<<B<<endl;
    cout<<"enter semester          : "<<Sem<<endl;
    cout<<"enter mobile number     : "<<N<<endl;

    cout<<"-------------------------------------------"<<endl;
    return 0;







}

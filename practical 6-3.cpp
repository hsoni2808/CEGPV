#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    short int N,i,j,p;
    char stu_id[25][25],stu_name[25][25], Grade[25][25];
    float Average_marks[25];
    cout<<"***********************************************"<<endl;
    cout<<"Student Record Manangement System "<<endl;
    cout<<"***********************************************"<<endl;
    cout<<endl;
    cout<<"Enter no of Students:";
    cin>>N;
    cout<<endl;
    cout<<"Enter student details";
    cout<<endl;
    for(i=1;i<=N;i++)
    {
         cout<<"Enter student id: ";
         cin>>stu_id[i];
         cout<<"Enter Student name: ";
         cin>>stu_name[i];
         cout<<"Enter student percentage: ";
         cin>>Average_marks[i];
         cout<<"Enter Grade: ";
         cin>>Grade[i];

    }
    cout<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"Current student records"<<endl;
    cout<<endl;
    for(i=1;i<=N;i++)
    {
        cout<<stu_id[i]<<"          "<<stu_name[i]<<"          "<<Average_marks[i]<<"%";
        cout<<endl;
    }
    cout<<endl;

    cout<<"Insert New student"<<endl;
    cout<<endl;
    for (i=1;i<=N-1;i++)
    {
        cout<<"Enter position: ";
        cin>>p;
        cout<<endl;
         cout<<"Enter student id: ";
         cin>>stu_id[i];
         cout<<"Enter Student name: ";
         cin>>stu_name[i];
         cout<<"Enter student percentage: ";
         cin>>Average_marks[i];
         cout<<"Enter Grade: ";
         cin>>Grade[i];
         cout<<endl;
    }
    cout<<endl;
    cout<<"Record inserted successfully!";
    cout<<endl;
    cout<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Updated Student Records"<<endl;
    cout<<endl;
    for (i=N;i>p;i--)
    {
        cout<<stu_id[i]<<"          "<<stu_name[i]<<"          "<<Average_marks[i]<<"%";
        cout<<endl;
    }
}

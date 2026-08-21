#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<"*******************************************\n   SPORTS EVENT SCORE ANALYSIS  \n*******************************************\n\n";

    int n,i,j;
    string search_id;
    char t,p;
    cout<<"Enter number of Participants : ";
    cin>>n;

    float score[n];
    string ID[n],name[n];

    for(i=0; i<n; i++)
    {

        cout<<"Enter Participant ID   : ";
        cin>>ID[i];

        cout<<"Enter Participant name : ";
        cin>>name[i];

        cout<<"Enter score            : ";
        cin>>score[i];

    }

    cout<<"\n\n----------------------------------------\n       PARTICIPANT PERFORMANCE \n----------------------------------------\n\n\n";
    cout<<"ID      Name        score\n";
    cout<<"----------------------------------------\n";

    for(i=0; i<n; i++)
    {

        cout<<endl<<ID[i]<<"     "<<name[i]<<"           "<<score[i];

        cout<<"\n----------------------------------------\n";
    }

    cout<<"SEARCH PARTICIPANT"<<endl;
    cout<<"Enter partiicipant id : ";
    cin>>search_id;
    cout<<endl;
    cout<<endl;

    for(i=0; i<n; i++)
    {
        if(ID[i]==search_id)
        {
            cout<<"--------------------------------------------"<<endl;
            cout<<"Participant found"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"ID"<<": "<<ID[i]<<endl;
            cout<<"Name"<<": "<<name[i]<<endl;
            cout<<"score"<<": "<<score[i]<<endl;
        }

    }
    cout<<endl;

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(score[i]<score[j])
            {

                temp=score[i];
                score[i]=score[j];
                score[j]=temp;

                t=ID[i];
                ID[i]=ID[j];
                ID[j]=t;

                p=name[i];
                name[i]=name[j];
                name[j]=p;
            }
            cout<<endl;
        }
        cout<<"----------------------------------"<<endl;
        cout<<"Ranking list"<<endl;
        cout<<"---------------------------------"<<endl;
        for(i=0; i<n; i++)
        {

            cout<<endl<<ID[i]<<"     "<<name[i]<<"           "<<score[i];
        }


    }
}

#include <iostream>
using namespace std;
int main ()
{
    int i,j,x,n,a;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        x=65;
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<(char)x;
            x=x+1;
        }
        a=i-1;
        x=x-2;
        for(j=1;j<=a;j++)
        {

            cout<<(char)x;
             x=x-1;

        }
        cout<<endl;
    }
}

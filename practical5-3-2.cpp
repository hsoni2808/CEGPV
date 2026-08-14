#include <iostream>
using namespace std;
int main()

{
    int i,j,n,x;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
         x=97;

        for(j=1;j<=i;j++)
        {
            cout<<(char)x;
            x=x+1;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int s=1,j,n,i,a=0,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>b;
        a=1;
        for(j=1;j<=b;j++)
        {
            if(j%2!=0)
            {
                a=2*a;
            }
            else
            {
                a=a+1;
            }
        }
        cout<<a<<'\n';
    }
    return 0;
}

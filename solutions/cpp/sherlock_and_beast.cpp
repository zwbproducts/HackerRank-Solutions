#include<iostream>
using namespace std;
int main()
{
    long long unsigned int e=0,d=0,c=1,t;
    int n,i,k,j,b;
    cin>>t;
    for(i=0;i<t;i++){
    e=0,b=0,d=0;
    cin>>n;
    b=n;
    if(b==1 || b==2 || b==4 || b==7)
        cout<<"-1"<<'\n';
    else
    {

    if(n%3==0 )
    {
        b=n;
    }
    else{
    while(1)
    {
        b=b-5;
        if(b%3==0)
            break;
    }}
    c=n-b;
    for(j=0;j<b;j++)
    {
        cout<<5;
    }
    for(k=0;k<c;k++)
    {
        cout<<3;
    }
    cout<<'\n';}
    }
    return 0;
}

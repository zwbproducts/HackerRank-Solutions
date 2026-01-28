#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,k,a[1000],j,i,count=0;
    cin>>t;
    for(i=0;i<t;i++)
        {
            count=0;
        cin>>n>>k;
        for(j=0;j<n;j++)
            {
            cin>>a[j];
            if(a[j]<=0)
                count++;
            }
        if(count<k)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    return 0;
}

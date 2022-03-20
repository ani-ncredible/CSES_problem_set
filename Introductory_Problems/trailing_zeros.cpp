#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,count=0;
    cin>>n;
    while(n>=5)
    {
        n=n/5;
        count+=n;
    }
    cout<<count;
}
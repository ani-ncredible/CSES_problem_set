#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    //int k=0;
    //k=((n*n)*(n*n-1))/2;
    for(long int i=1;i<=n;i++)
    {
        long int k,m;
        k=((i*i)*(i*i-1))/2;
        m=4*(i-1)*(i-2);
        cout<<(k-m)<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    vector<long int>v;
    v.push_back(n);
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            v.push_back(n);
        }
        else if(n%2!=0)
        {
            n=n*3+1;
            v.push_back(n);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

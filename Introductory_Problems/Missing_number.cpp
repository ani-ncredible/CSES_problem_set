#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m,k=0;
    cin>>n;
    vector<long int>v;
    for(long int i=0;i<n-1;i++)
    {
        cin>>m;
        v.push_back(m);
    }
    if(v.size()<2)
    {
        if(v[0]==1)
        {
            cout<<2;
        }
        else if(v[0]==2)
        {
            cout<<1;
        }
    }
    else
    {
        sort(v.begin(),v.end());
        for(long int i=0;i<v.size();i++)
        {
            if(v[i+1]!=v[i]+1)
            {
                k=v[i]+1;
                break;
            }
        }
        cout<<k;
    }
}

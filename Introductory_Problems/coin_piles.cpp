#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>v;
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back({x,y});
    }
    int k,l,max,min;
    for(int i=0;i<n;i++)
    {
        k=v[i].first;
        l=v[i].second;
        if(k>l)
        {
            max=k;
            min=l;
        }
        else
        {
            max=l;
            min=k;
        }
        if(((k+l)%3==0)&&((min>=(max/2))))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
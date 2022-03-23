#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    vector<int>v;
    long int arr[n];
    for(long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    long int i=1;
    long int k;
    k=v[0];
    long int count=1;
    while(i<v.size())
    {
        if(k!=v[i])
        {
            count++;
            k=v[i];
        }
        //k=v[i];
        i++;
    }
    cout<<count;
}
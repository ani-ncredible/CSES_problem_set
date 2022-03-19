#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    vector<long int>v1;
    vector<long int>v2;
    if(n>1&&n<4)
    {
        cout<<"NO SOLUTION";
    }
    else if(n==4)
    {
        while(n!=0)
        {
            if(n%2==0)
            {
                v1.push_back(n);
            }
            else
            {
                v2.push_back(n);
            }
            n--;
        }
        for(long int i=0;i<v2.size();i++)
        {
            cout<<v2[i]<<" ";
        }
        for(long int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
    }
    else
    {
        while(n!=0)
        {
            if(n%2==0)
            {
                v1.push_back(n);
            }
            else
            {
                v2.push_back(n);
            }
            n--;
        }
        for(long int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        for(long int i=0;i<v2.size();i++)
        {
            cout<<v2[i]<<" ";
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    vector<int>v;
    int count=0;
    cin>>str;
    int n;
    n=str.length();
    for(int i=0;i<n;i++)
    {
        while(str[i]==str[i+1])
        {
            count++;
            i++;
        }
        v.push_back(count);
        count=0;
    }
    int max;
    max=v[0];
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>max)
        {
            max=v[i];
        }
    }
    cout<<max+1;
}


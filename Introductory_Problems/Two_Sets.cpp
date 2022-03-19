#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str="";
    cin>>n;
    int arr[n+1];
    arr[0]=1;
    for(int i=1;i<n+1;i++)
    {
        arr[i]=i;
    }
    int sum=0;
    sum=(n*(n+1))/2;
    vector<int>v,v1,v2;
    if(sum%2==0)
    {
        //vector<int>v1;
        //vector<int>v2;
        if(n%4==0)
        {
            str="YES";
            for(int i=1;i<=n/4;i++)
            {
                v1.push_back(i);
            }
            for(int i=0;i<n/4;i++)
            {
                v1.push_back(arr[n-i]);
            }
            for(int i=n/4+1;i<v1[v1.size()-1];i++)
            {
                v2.push_back(i);
            }
        }
        else if(n%4==3)
        {
            str="YES";
            v1.push_back(1);
            v1.push_back(2);
            v2.push_back(3);
            for(int i=n%4+1;i<=n;i++)
            {
                v.push_back(i);
            }
            for(int i=0;i<(n-3)/4;i++)
            {
                v1.push_back(v[i]);
                v1.push_back(v[v.size()-1-i]);
            }
            for(int i=4+(n-3)/4;i<=n-(n-3)/4;i++)
            {
                v2.push_back(i);
            }
        }
    }
    else
    {
        str="NO";
    }
    if(str=="NO")
    {
        //cout<<n<<endl;
        cout<<str;
    }
    else
    {
        //cout<<n<<endl;
        cout<<"YES"<<endl;
        cout<<v1.size()<<endl;
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl<<v2.size()<<endl;
        for(int i=0;i<v2.size();i++)
        {
            cout<<v2[i]<<" ";
        }
    }
}
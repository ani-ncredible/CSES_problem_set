#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,count=0;
    cin>>n;
    long int arr[n];
    for(long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(long int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            while(arr[i]>arr[i+1])
            {
                arr[i+1]++;
                count++;
            }
        }
    }
    cout<<count;
}


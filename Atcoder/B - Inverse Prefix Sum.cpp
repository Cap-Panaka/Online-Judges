// https://atcoder.jp/contests/abc280/tasks/abc280_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    int ar[n];
    
    
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    cout<<ar[0]<<' ';
    int pre[100001];
    for(i=0;i<n;i++)
    {
       pre[i]=ar[i+1]-ar[i]; 
    }
    for(i=0;i<n-1;i++)
    {
       cout<<pre[i]<<' ' ;
    }
    
}

//3
//3 4 8

//3 1 4

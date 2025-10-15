// https://atcoder.jp/contests/abc368/tasks/abc368_a

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    for(int i=0;i<m;i++)
    {
        cout<<ar[n-m+i]<<' ';
    }
    
    for(int i=0;i<n-m;i++)
    {
        cout<<ar[i]<<' ';
    }
}

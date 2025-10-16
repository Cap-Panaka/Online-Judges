// https://atcoder.jp/contests/abc307/tasks/abc307_a

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int ar[7];
        for(int j=0;j<7;j++)
        {
            cin>>ar[j];
        }
        sum=0;
        
        for(int j=0;j<7;j++)
        {
            sum+=ar[j];
        }
        
        
        cout<<sum<<' ';
        
        
    }
}

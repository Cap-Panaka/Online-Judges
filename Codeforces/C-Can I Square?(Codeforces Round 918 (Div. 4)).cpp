// https://codeforces.com/contest/1915/problem/C

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        int ar[n];
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum=ar[i]+sum;
        }
        if(ceil((double)sqrt(sum))==floor((double)sqrt(sum)))
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
        
        
    }
}

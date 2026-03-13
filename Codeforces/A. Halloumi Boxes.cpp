https://codeforces.com/contest/1903/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,k;
    cin>>n>>k;
    
    vector<long long>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    vector<long long> copy_ar=ar;
    sort(copy_ar.begin(),copy_ar.end());
    
    if(copy_ar==ar || k>1)
    {
        cout<<"YES"<<endl;
        
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    }
}

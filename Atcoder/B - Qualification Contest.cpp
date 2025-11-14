// https://atcoder.jp/contests/abc288/tasks/abc288_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    sort(v.begin(),v.begin()+k);
    
    for( int i=0;i<k;i++)
    {
        cout<<v[i]<<"\n";
    }
}

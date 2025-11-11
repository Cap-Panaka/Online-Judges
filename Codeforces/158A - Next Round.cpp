// https://codeforces.com/problemset/problem/158/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i]>=vec[k-1] && vec[i]>0)
        {
            ans++;
        }
    }
    cout<<ans<<" ";
}

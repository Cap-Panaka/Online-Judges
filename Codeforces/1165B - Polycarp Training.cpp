// https://codeforces.com/problemset/problem/1165/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int ans=0;
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++)
    {
        if(vec[i]>ans)
        {
            ans++;
        }
        
    }
    
    cout<<ans<<"\n";
    
}

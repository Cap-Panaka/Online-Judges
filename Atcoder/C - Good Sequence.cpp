// https://atcoder.jp/contests/arc087/tasks/arc087_a
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> count(n+1);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>n)
        {
            ans++;
        }
        else
        {
            count[x]++;
        }
        
    }
    for(int i=1;i<=n;i++)
    {
       if(count[i]>=i)
       ans+=count[i]-i;
       else ans+=count[i];
    }
    cout<<ans<<" ";
    
}

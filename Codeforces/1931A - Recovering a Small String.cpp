// https://codeforces.com/problemset/problem/1931/A

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int sum;
    cin>>sum;
    for(char i='a';i<='z';i++)
    {
        for(char j='a';j<='z';j++)
        {
            for(char k='a';k<='z';k++)
            {
                int x=0;
                x+=i-'a'+1;
                x+=j-'a'+1;
                x+=k-'a'+1;
                
                if(x==sum)
                {
                    cout<<i<<j<<k<<endl;
                    return ;
                }
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
}

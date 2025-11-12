// https://codeforces.com/problemset/problem/1760/C

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n),hehe;
        
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        
        hehe=v;
        sort(hehe.begin(),hehe.end());
        int max=hehe[n-1];
        for(int i=0;i<n;i++)
        {
            if(max==v[i])
            {
                cout<<v[i]-hehe[n-2]<<" ";
            }
        
        else
        {
            cout<<v[i]-max<<" ";
        }
    }
    cout<<"\n";
    }
}

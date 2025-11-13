// https://atcoder.jp/contests/abc371/tasks/abc371_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<char>vec[n+1];
    for(int i=0;i<m;i++)
    {
        int x;
        char c;
        cin>>x>>c;
        int hehe;
        if(c=='M')hehe=1;
        else hehe=0;
        for(auto temp:vec[x])
        {
            if(temp=='M') hehe=0;
        }
        if(hehe)cout<<"Yes\n";
        else cout<<"No\n";
        vec[x].push_back(c);
    }
    
}



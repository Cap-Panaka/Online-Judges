//https://atcoder.jp/contests/abc088/tasks/abc088_a

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    
    int c= a%500;
    if(c<=b) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';
}

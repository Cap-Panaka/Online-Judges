// https://atcoder.jp/contests/abc207/tasks/abc207_a?lang=en

#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b,int c)
{
    return a+b+c;
}
int min(int a,int b,int c)
{
    if(a<b&&a<c) return a;
    if(b<c) return b;
    return c;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<sum(a,b,c)-min(a,b,c)<<'\n';
    
}

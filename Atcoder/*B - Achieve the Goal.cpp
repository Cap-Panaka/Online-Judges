// https://atcoder.jp/contests/abc151/tasks/abc151_b?lang=en

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m;
    cin>>n>>k>>m;
    int s=0;
    for(int i=1;i<=n-1;i++)
    {
        int a;
        cin>>a;;
        s+=a;
        
    }
    int remaining =n*m-s;
    
    if(remaining>k)
    {
        cout<<"-1"<<'\n';
    }
    
    else{
        if (remaining < 0) {
    cout<<"0"<<'\n';
} else {
    cout<<remaining<<'\n';
}
    }
}

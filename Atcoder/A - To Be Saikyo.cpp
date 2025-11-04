// https://atcoder.jp/contests/abc313/tasks/abc313_a

#include<bits/stdc++.h>
using namespace std;
int max(int br[],int n)
{
    int max=0;
    for(int i=1;i<n;i++)
    {
        if(max<br[i])
        {
            max=br[i];
        }
    }
    return  max;
}


int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int temp=max(ar,n);
    int ans = temp+1-ar[0];
    if (ans<0) ans=0;
    cout<<ans<<'\n';
    
}

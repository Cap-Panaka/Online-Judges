//  https://atcoder.jp/contests/abc298/tasks/abc298_b
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+1][n+1],br[n+1][n+1],temp[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>ar[i][j];
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>br[i][j];
        }
    }
    int flag=0;
    for(int k=0;k<n;k++)
    {
       int  flag2=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ar[i][j]==1 && br[i][j]==0)
                {
                    flag2=0;
                }
            }
        }
        if(flag2==1)
        {
            flag=1;
            break;
        }
        
        // rotate ar
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                temp[i][j]=ar[n+1-j][i];
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                ar[i][j]=temp[i][j];
            }
        }
        
    }
    
    if(flag==1) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';
    
}

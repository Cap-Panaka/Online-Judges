// https://atcoder.jp/contests/abc309/tasks/abc309_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    char ar[n][n];
    char nar[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
    
    for(j=0;j<n-1;j++)
    {
        nar[0][j+1]=ar[0][j];
    }
    
    for(i=0;i<n-1;i++)
    {
        nar[i+1][n-1]=ar[i][n-1];
    }
    
    for(j=1;j<n;j++)
    {
        nar[n-1][j-1]=ar[n-1][j];
    }
    
    for(i=0;i<n;i++)
    {
        nar[i-1][0]=ar[i][0];
    }
    
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            nar[i][j]=ar[i][j];
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<nar[i][j];
        }
        cout<<"\n";
    }
    
    /*
            j j j
            | | |
            0 1 2(n-1)
                                         
        i=0 1 2 3              5 1 2
        i=1 5 6 4              4 6 3
        i=2 4 3 2              3 2 4
         (n-1)
     */
    
    
}





/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    char ar[n][n];
    int nar[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
    
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            nar[i][j]=ar[i][j]-'0';
           // cout<<nar[i][j];
        }
      
    }
    
         for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            
            cout<<nar[i][j];
        }
        cout<<"\n";
    }
    
    
}

*/

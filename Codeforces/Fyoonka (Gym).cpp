#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n,mid,row,col;
    cin>>n;
    
    mid=(n/2)+1;
    
    for(row=1;row<=mid;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(col<=row || col>=n-row+1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<'\n';
    }
    for(row=mid-1;row>=1;row--)
    {
        for(col=1;col<=n;col++)
        {
            if(col<=row || col>=n-row+1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<'\n';
    }
    
}

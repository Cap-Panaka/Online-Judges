#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,n,col;
    cin>>n;
    
         for(row=0;row<=n/2;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=n-2*row;col++)
        {
            cout<<"*";
        }
        cout<<'\n';
}
    for(row=n/2;row>=0;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=n-2*row;col++)
        {
            cout<<"*";
        }
        cout<<'\n';
    }
   
}

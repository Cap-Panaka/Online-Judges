// https://codeforces.com/problemset/problem/381/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int i=0,j=n-1;
    int player1=0,player2=0,t=1;
    
    while(i<=j)
    {
        if(t%2==1)
        {
            if(vec[i]>=vec[j])
            {
                player1+=vec[i];
                i++;
            }
            else
            {
                player1+=vec[j];
                j--;
        
            }
        }
        else
        {
            if(vec[i]>=vec[j])
            {
                player2+=vec[i];
                i++;
            }
            else
            {
                player2+=vec[j];
                j--;
        
            }
        }
        t++;
        
    }
    cout<<player1<<" "<<player2<<'\n';
    
}

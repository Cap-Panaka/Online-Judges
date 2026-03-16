#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int X,Y;
    cin>>X>>Y;
    int barti=Y%X;
    if(barti==0)
    {
        cout<<"0"<<'\n';
    }
    else
    {
        cout<<X-barti<<'\n';
    }
    
}

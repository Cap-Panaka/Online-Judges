#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i;
    cin>>n;
   if(n==1)
   {
       cout<<"No"<<'\n';
       return 0;
   }
   for(i=2;i<n;i++)
   {
       if(n%i==0)
       {
           cout<<"No"<<'\n';
           return 0;
       }
   }
   cout<<"Yes"<<'\n';

}
  

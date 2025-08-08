#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[100],i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]){
        cout<<"No"<<'\n';
        break;
        }
    }
    if(i==n-1){
    cout<<"Yes"<<'\n';
    }
    
}

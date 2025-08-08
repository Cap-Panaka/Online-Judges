#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin >> arr1[i] >>arr2[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr2[i]> arr1[i])
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';
    }
}

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,min;
    cin>>a>>b;
    min = (a > b) ? a : b;
    for(i=min;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            cout<<i<<'\n';
            return 0;
        }
    }
    cout<<"1"<<'\n';
}*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >>a>>b;
    while (b!= 0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    cout<<a<<'\n';
}

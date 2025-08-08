#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b;
    cin>>a>>b;
    int sotoka=a/100,dosoka=(a%100)/10,ekoka=(a%100)%10;
    int sotokb=b/100,dosokb=(b%100)/10,ekokb=(b%100)%10;
    int suma=sotoka+dosoka+ekoka;
    int sumb=sotokb+dosokb+ekokb;
    if(suma>sumb){
        cout<<suma<<'\n';
    }
    else
    {
        cout<<sumb<<'\n';
    }
    
}

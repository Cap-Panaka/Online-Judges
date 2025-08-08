#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,reversed;
    cin>>str;
    for(int i=str.length()-1;i>=0;i--)
    {
        reversed+=str[i];
    }
    if(reversed==str){
        cout<<"Yes"<<'\n';
    }
    else{
        cout<<"No"<<'\n';
    }
    
}

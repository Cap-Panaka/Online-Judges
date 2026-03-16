#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,x,y,z,count=0;
    cin >> n >> sum;
    
    for(x=0;x<=n;x++)
    {
        if(x>sum)
        break;
        for(y=0;y<=n;y++)
        {
            if(x+y> sum)
            break;
            z=sum-(x+y);
            if(z>=0 && z<=n)
            {
                count++;
            }
        }
    }
    cout<<count;
    
}

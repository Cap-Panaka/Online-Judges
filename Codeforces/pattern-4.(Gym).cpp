#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int row, n, col;
    cin >> n;
    int mid = (n + 1) / 2;
    for (row = 1; row <= n; row++) {
        int level=row<= mid ?row:n - row + 1;
        for (col = 1; col <= mid-level; col++) {
            cout<<" ";
        }
        for (col = 1; col <= 2 * level - 1; col++) {
                cout<<"*";
        }
        cout << '\n';
    }
}

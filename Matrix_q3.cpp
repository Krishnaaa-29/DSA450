#include "bits/stdc++.h"
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    
    int s = sizeof(a)/sizeof(a[0][0]);
    sort(a,a+s);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    return 0;
}
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
    
    int max_one = 0, counter = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                counter++;
            }
        }
        
        if (counter > max_one)
        {
            max_one = max(max_one,counter);
            ans = i;
        }
    }
    cout<<ans;
}
#include <iostream>
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
    int target;
    cin>>target;

    int r = 0, c = m-1;
    bool check = false;

    while (r < n && c >= 0)
    {
        if (a[r][c] == target)
        {
            check = true;
        }
        
        else if (a[r][c] < target)
        {
            r++;
        }
        
        else
        {
            c--;
        }
    }

    if (check)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}
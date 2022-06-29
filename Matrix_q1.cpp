#include "bits/stdc++.h"
using namespace std;

//Spiral Traversal Algorithm

int main(){

    int r,c;
    cin>>r>>c;

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
    }
    
    int row_start = 0, col_start = 0;
    int row_end = r-1, col_end = r-1;

    while (row_start <= row_end && col_start <= col_end)
    {
        for (int col = col_start; col <= col_end; col++)
        {
            cout<<a[row_start][col]<<" ";
        }
        row_start++;

        for (int row = row_start; row <= row_end; row++)
        {
            cout<<a[row][col_end]<<" ";
        }
        col_end--;

        for (int col = col_end; col >= col_start; col--)
        {
            cout<<a[row_end][col]<<" ";
        }
        row_end--;

        for (int row = row_end; row >= row_start; row--)
        {
            cout<<a[row][col_start]<<" ";
        }
        col_start++;
    }
    return 0;
}
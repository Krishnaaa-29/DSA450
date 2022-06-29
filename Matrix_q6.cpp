#include "bits/stdc++.h"
using namespace std;

//printing the area of largest rectangle of ones

int main(){

    int n,m;
    cin>>n>>m;

    int a[n][m];

    for(int i = 0; i< n; i++){
        for(int j = 0;j<m; j++){
            cin>>a[i][j];
        }
    }
    
    int area = 0,max_area = 0;
    for(int i = 0;i<n; i++){
        for(int j = 0;j<m; j++){

            area += a[i][j];
            a[i][j] = a[i-1][j] + a[i][j];
        }
        max_area = max(area, max_area);
    }

}
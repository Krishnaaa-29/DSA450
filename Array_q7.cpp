#include "bits/stdc++.h"
using namespace std;

int cyclicrotate(int a[], int n){

    int temp = a[n-1];
    for (int i = n-1; i > 0; i--)
    {
        a[i] = a[i-1];
    }
    a[0] = temp;
}

int main(){

    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    cyclicrotate(a,n);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
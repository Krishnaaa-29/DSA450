#include "bits/stdc++.h"
using namespace std;

//Find the Union and Intersection of the two sorted arrays.

int doUnion(int a[], int b[], int n, int m){

    int i = 0,j = 0;
    while (i<n && j<m)
    {
        if (a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }

        else if (a[i] == b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        
        
        else if (b[j]<a[i])
        {
            cout<<b[j]<<" ";
            j++;
        }
        
        else
        {
            cout<<b[j]<<" ";
            j++;
        }
    }

    while (i<n)
    {
        cout<<a[i]<<" ";
        i++;
    }
    
    while (j<m)
    {
        cout<<b[j]<<" ";
        j++;
    }
    return 0;
}

int main(){

    int n,m;
    cin>>n>>m;

    int a[n], b[m];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    
    doUnion(a,b,n,m);
    return 0;
}
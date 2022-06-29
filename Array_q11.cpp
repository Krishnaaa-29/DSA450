#include "bits/stdc++.h"
using namespace std;

//find duplicate in an array of N+1 Integers

int findDuplicate(int a[], int n){

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[j] == a[i])
            {
                cout<<a[j];
            }
        }
    }
}

int betterDuplicate(int a[], int n){

    sort(a,a+n);
    int diff = a[1] - a[0];
    if (diff == 0)
    {
        cout<<a[0];
    }
    
    for (int i = 1; i < n; i++)
    {
        diff = a[i+1] - a[i];
        if (diff == 0)
        {
            cout<<a[i];
        }
    }
    
}
int main(){

    int n;
    cin>>n;

    int a[n+1];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    //findDuplicate(a,n);
    betterDuplicate(a,n);
    return 0;
}
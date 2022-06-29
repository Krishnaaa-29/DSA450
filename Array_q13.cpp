#include "bits/stdc++.h"
using namespace std;

//Kadane's Algorithm (Important)

int SubSum(int a[], int n){

    int currsem = 0;
    int maxsum = 0;

    for (int i = 0; i < n; i++)
    {
        currsem = currsem + a[i];
        if (currsem < 0)
        {
            currsem = 0;
        }
        maxsum = max(maxsum,currsem);  
    }
    cout<<maxsum;
    
    return 0;
}

int main(){
    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    SubSum(a,n);
    
    return 0;
}
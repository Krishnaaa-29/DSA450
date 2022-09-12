#include "bits/stdc++.h"
using namespace std;

int pairsum(int a[], int n, int k){

    int start = 0;
    int end = n-1;

    while (start < end)
    {
        if (a[start] + a[end] == k)
        {
            cout<<start<<" "<<end;
        }
        
        else if (a[start] + a[end] > k)
        {
            end--;
        }

        else
        {
            start++;
        }
        
        
    }
    
}

int main(){
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    pairsum(a,n);
    
    return 0;
}
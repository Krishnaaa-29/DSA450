#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int S;
    cin>>S;

    int st=-1;
    int en=-1;
    int curr_sum = 0;
    int j=0,i=0;

    
    while(j<n && curr_sum + a[j]< S){

        curr_sum += a[j];
        j++;
    }

    if (curr_sum == S)
    {
        cout<<i+1<<" "<<j;
        return 0;
    }
    
    while (j<n)
    {
        curr_sum+= a[j];
        while (curr_sum>S)
        {
            curr_sum-=a[i];
            i++;
        }
        if (curr_sum == S)
        {
            st = i+1;
            en = j+1;
            break;
        }
        
        j++;
    }
    cout<<st<<" "<<en;
    return 0;
}
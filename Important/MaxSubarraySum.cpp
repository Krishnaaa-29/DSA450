#include "bits/stdc++.h"
using namespace std;

//cumilative sum array approach
/*int Subarraysum(int a[], int n){

    int currsum[n]
    currsum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        currsum[i] = currsum[i-1] + a[i-1];
    }
    
    int maxSum = 0;

    for (int i = i; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currsum[i] - currsum[j];
            maxSum = max(maxSum,sum);
        }
        
    }
    
    cout<<maxSum;
}*/

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
    
    //cout<<"Cumilative Approach"<<Subarraysum(a,n)<<endl;
    cout<<"Kadane's Approach "<<SubSum(a,n);
    
    return 0;
}
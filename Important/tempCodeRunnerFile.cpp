#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int k, int i){
    int sum = 0;

    while(i<k){

        sum = sum + arr[i];
        i++;
    }

    return sum;
}

int main(){

    int n,k;
    cin>>n>>k;

    int arr[n];

    for(int i = 0;i <n; i++){
        cin>>arr[i];
    }

    int minsum = INT_MAX, currsum = 0;
    int pos = 0;
    int i = 0;

    for(i; i<n; i++){

        currsum = sum(arr,k,i);
        k++;

        if(currsum < minsum){
            minsum = currsum;
            pos = i+1;
        }

    }

    cout<<pos<<endl;
    return 0;
}
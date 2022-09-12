#include "bits/stdc++.h"
using namespace std;

//find two unique number where all other repeat twice

int setBit(int n, int pos){

    return ((n & (1<<pos))!= 0);
}

int findunique(int a[], int n){

    int xorsum = 0;

    for(int i = 0; i<n; i++){

        xorsum = xorsum^a[i];
    }

    int setbit = 0;
    int pos = 0;

    while(setbit != 1){

        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    int tempxor = xorsum;
    for(int i = 0; i<n; i++){

        if(setBit(a[i],pos-1)){
            newxor = newxor ^ a[i];
        }
    }

    cout<<newxor<<" ";
    cout<<(tempxor^newxor);
}

int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i = 0;i<n; i++){

        cin>>a[i];
    }

    findunique(a,n);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i<n; i++){

        cin>>arr[i];
    }

    int ptr = 0;
    int counter = 0;

    int l,r=1;

    for(int i = 1; i<n; i++){
        
        if(arr[ptr] < arr[i]){

           r++;
        }

        else{
           
            ptr = i;
            r++;
        }
    }

    

    return 0;
}
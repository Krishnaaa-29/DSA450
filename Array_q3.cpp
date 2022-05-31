#include <iostream>
using namespace std;

int sort(int arr[], int n, int k){

    for(int i=1; i<n; i++){
        int curr = arr[i];
        int j = i-1;

        while (arr[j]>curr)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }

    cout<<arr[k-1];
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int k;
    cin>>k;

    sort(arr,n,k);

    return 0;
}
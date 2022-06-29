#include <iostream>
using namespace std;

void NegativeSort(int arr[], int n){

    int j= 1;
    while(j<n){
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i]>0 && arr[i+1]<0)
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        j++;
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    NegativeSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;   
}
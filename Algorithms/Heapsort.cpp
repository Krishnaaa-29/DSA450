#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i){


    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[largest] < arr[left]){

        largest = left;
    }

    if(right < n && arr[largest] < arr[right]){

        largest = right;
    }

    if(largest != i){

        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n)
{

    int size = n - 1;

    while (size > 0)
    {

        swap(arr[size], arr[0]);
        size--;

        heapify(arr, size, 0);
    }
}

int main(){

    int arr[] = {70,60,45,55,20,30};

    int n = 6;

    for(int i = n/2 - 1; i>=0; i--){

        heapify(arr, n, i);
    }

    cout<<"Your Heap: "<<endl;

    for(int i = 0; i<n; i++){

        cout<<arr[i]<<" ";
    }

    cout<<endl;

    heapsort(arr, n);

    cout<<"After sorting: "<<endl;

    for(int i = 0; i<n; i++){

        cout<<arr[i]<<" ";
    }

    return 0;
}
#include <iostream>
using namespace std;

int MaxMin(int arr[], int n){
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
        else if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout<<max<<" "<<min;
    
}

int main(){
    int n;
    cout<<"Size of Array: ";
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    MaxMin(arr, n);
    return 0;
}
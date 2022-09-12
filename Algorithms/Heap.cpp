#include <bits/stdc++.h>
using namespace std;

class heap{

    public:
    int arr[100];
    int size = 0;

    void insert(int val){

        size++;
        int index = size;
        arr[index] = val;

        while(index > 1){

            int parent = index/2;
            if(arr[parent] < arr[index]){

                swap(arr[index], arr[parent]);
                index = parent;
            }

            else{
                return;
            }
        }
    }

    void print(){

        for(int i = 1; i<=size ; i++){

            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deletefromheap(){

        if(size == 0){
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i < size){

            int left = 2*i;
            int right = 2*i + 1;

            if(left < size && arr[left] > arr[i]){

                swap(arr[left], arr[i]);
                i = left;
            }

            else if(right < size && arr[right] > arr[i]){

                swap(arr[right], arr[i]);
                i = right;
            }

            else{
                return;
            }
        } 
    }
};

void heapify(int arr[], int n, int i){

    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(largest < n && arr[largest] < arr[i]){
        largest = left;
    }

    if(largest < n && arr[largest] < arr[i]){
        largest  =right;
    }

    if(largest != i){

        swap(arr[largest], arr[i]);
        heapify(arr, n , largest);
    }
}


int main(){

    heap h;

    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    //h.insert(25);

    h.print();

    h.deletefromheap();
    h.print();

    return 0;
}
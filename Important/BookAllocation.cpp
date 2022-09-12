#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n,int m, int mid){

    int studentCount = 1;
    int pagesum = 0;

    for(int i = 0; i<n; i++){

        if(pagesum + arr[i] <= mid){

            pagesum += arr[i];
        }

        else{
            studentCount++;
            
            if(studentCount > m || arr[i] > mid){
                return false;
            }

            pagesum = arr[i];
        }
    }

    return true;
}

int BookAllot(vector<int> arr, int m){

    int n = arr.size();
    int s = 0;
    int sum = 0;
    int ans;

    for(int i = 0; i<n; i++){
        sum += arr[i];
    }

    int e = sum;

    while(s <= e){

        int mid = (s+e)/2;

        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }

        else{

            s = mid + 1;
        }
    }

    return ans;
}

int main(){

    int n,m;
    cin>>n>>m;

    vector<int> arr(n);

    for(auto &i : arr){
        cin>>i;
    }

    cout<<BookAllot(arr,m);

    return 0;
} 

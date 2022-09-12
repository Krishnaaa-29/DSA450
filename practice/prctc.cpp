#include <bits/stdc++.h>
using namespace std;

int largestsub(vector<int> arr, int n, int k){

    priority_queue<int, vector<int>, greater<int>> mpq;

    for(int i = 0; i<n; i++){

        int sum = 0;

        for(int j = i; j<n; j++){

            sum += arr[j];

            if(mpq.size() < k){

                mpq.push(sum);
            }

            else{

                if(sum > mpq.top()){

                    mpq.pop();
                    mpq.push(sum);
                }
            }
        }
    }

    return mpq.top();
}

int main(){

    int n;
    cin>>n;

    vector<int> arr(n);

    for(auto &i : arr){

        cin>>i;
    }

    // int k;
    // cin>>k;

    cout<<largestsub(arr,n,k);

    return 0;
}
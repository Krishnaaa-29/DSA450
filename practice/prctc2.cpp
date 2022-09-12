#include <bits/stdc++.h>
using namespace std;

vector<int> nextsmallest(vector<int> arr, int n){
    stack <int> st;
    st.push(-1);
    vector <int> ans(n);

    for(int i = n-1; i>=0; i--){
        int curr = arr[i];

        while(st.top() != -1 && arr[st.top()] >= curr){
            st.pop();
        }

        ans[i] = st.top();
        st.push(i);
    }

    return ans;
}

vector<int> prevsmallest(vector<int> arr, int n){
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);

    for(int i = 0; i<n; i++){
        int curr = arr[i];

        while(st.top() != -1 && arr[st.top()] >= curr){
            st.pop();
        }

        ans[i] = st.top();
        st.push(i);
    }

    return ans;
}

int largestrectangle(vector<int> &arr){

    int n = arr.size();

    vector <int> next(n);
    next = nextsmallest(arr, n);

    vector <int> prev(n);
    prev = prevsmallest(arr, n);

    int area = INT_MIN;

    for(int i = 0; i<n; i++){

        int l = arr[i];

        if(next[i] == -1){
            next[i] = n;
        }

        int b = next[i] - prev[i] - 1;

        int newArea = l*b;
        area = max(area, newArea);

    }

    return area;
}

int main(){

    int n;
    cin>>n;

    vector <int> arr(n);
    for(auto &i : arr){
        cin>>i;
    }

    cout<<largestrectangle(arr);

    return 0;

}
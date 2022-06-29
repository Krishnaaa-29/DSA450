#include <bits/stdc++.h>
using namespace std;

int jump(int a[], int n){

    int counter = 1;
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        len = len + a[i];

        if (len == n)
        {
            cout<<counter;
            return 0;
        }

        else{
            counter++;
        }
         
    }
    
}

int main(){

    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    jump(a,n);

    return 0;
}
#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int record = 0;
    int max = a[0];
    int j = 1;

    while (j<n)
    {
        if (a[j]> max && a[j]>a[j+1])
        {
            record++;
            max = a[j];
        }
        j++;
    }
    
    cout<<record;
    return 0;
}
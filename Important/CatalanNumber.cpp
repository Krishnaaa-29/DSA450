// Cn = C(0->n-1) * C(n-1 -> 0)
// C3 = C0C2 + C1C1 + C2C0

#include <bits/stdc++.h>
using namespace std;

int catalan(int n){

    if(n <= 1){

        return 1;
    }

    int res = 0;
    for(int i = 0; i<n; i++){

        res += catalan(i) * catalan(n-i-1);
    }

    return res;
}

int main(){

    for(int i = 0; i<10; i++){

        cout<<catalan(i)<<" ";
    }

    return 0;
}
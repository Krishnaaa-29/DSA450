#include<iostream>
using namespace std;

int factorial(int n)
{
    int fac = 1;

    for (int i = 2; i <= n; i++)
    {
        fac = fac * i;
    }
    
    return fac;
    
}

int main()
{
    int n,r,ans;
    cin>>n>>r;

    ans = factorial(n)/(factorial(r) * factorial(n-r));
    cout<<ans;

    return 0;
}
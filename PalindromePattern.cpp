#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n; 

    for (int i = 1; i <= n; i++)
    {
        for (int j= 0; j < n - i; j++)
        {
            cout<<" ";
        }

        int count = i;

        for (int j = n - i; j < n; j++)
        {
            cout<<count;
            count--;
        }

        count = 2;

        for (int j = n; j < n + i - 1; j++)
        {
            cout<<count;
            count++;
        }
        
        cout<<endl;

    }
    
    return 0;

}
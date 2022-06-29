#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int z = 0, o = 0,t = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            z++;
        }

        else if (arr[i] == 1)
        {
            o++;
        }

        else if (arr[i] == 2)
        {
            t++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (z>0)
        {
            arr[i] = 0;
            z--;
        }
        
        else if (o>0)
        {
            arr[i] =1;
            o--;
        }

        else if (t>0)
        {
            arr[i] = 2;
            t--;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
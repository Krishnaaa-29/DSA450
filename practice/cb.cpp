#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int size = (n*(n+1))/2;

    int fibo[size + 2];

    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= size; i++)
    {

        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    int count = 0;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            if (i <= j)
            {

                cout << fibo[count]<<" \t";
                count++;
            }
        }
        
        cout << endl;
    }
    return 0;
}
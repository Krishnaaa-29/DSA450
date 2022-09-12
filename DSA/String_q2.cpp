#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string str){

    int i = 0;
    int n = str.length();
    int j = n-1;

    while(i < j){

        if(str[i] != str[j]){

            return 0;
        }

        i++;
        j--;
    }

    return 1;
}

int main(){

    string str;
    getline(cin,str);

    cout<<isPalindrome(str);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

//Longest Palindrome Substring

int LongestPalindrome(string str){

    int n = str.length();
    int low,high;
    int start = 0, maxlength = 1;

    for(int i = 0; i<n; i++){

        low = i-1;
        high = i+1;

        while (high < n && str[high] == str[i])
        {
            high++;
        }

        while(low >= 0 && str[low] == str[i]){
            low--;
        }

        while(low >= 0 && high < n && str[low] == str[high]){

            low--;
            high++;
        }
        
        int length = high - low - 1;
        if(length > maxlength){

            maxlength = length;
            start = low + 1;
        }
    }

    cout<<"Longest Palindrome: "<<str.substr(start,maxlength)<<endl;
    cout<<"Length "<<maxlength;

    return 0;
}

int main(){

    string str;
    getline(cin, str);

    LongestPalindrome(str);
    return 0;
}
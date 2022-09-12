#include <bits/stdc++.h>
using namespace std;

//To print duplicates in a string

int Duplicate(string str){

    sort(str.begin(), str.end());
    int n = str.length();

    int i = 0;
    int j = i+1;
    int counter = 1;

    while(j < n){
        if(str[i] == str[j]){
            counter++;
            j++;
        }

        else if (counter > 1)
        {
            cout<<str[i]<<" : "<<counter<<endl;
            i = j;
            j++;
            counter = 1;
        }
        
        else{
            i = j;
            j++;
            counter = 1;
        }
    }
    
}

int main(){

    string str;
    getline(cin,str);

    Duplicate(str);
    return 0;
}
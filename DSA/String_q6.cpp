#include <bits/stdc++.h>
using namespace std;

//to check the valid shuffle

int shuffle(string str1, string str2, string str){

    sort(str.begin(), str.end());

    if (str.length() != str1.length() + str2.length())
    {
        cout<<" It is not a valid of shuffle"<<endl;
    }
    
    string temp = str1 + str2;
    sort(temp.begin(), temp.end());

    if (!str.compare(temp))
    {
        cout<<"It is a valid shuffle"<<endl;
    }

    else{
        cout<<"It is not a valid shuffle"<<endl;
    }

    return 0;
}

int main(){

    string str1,str2,str;
    
    getline(cin,str1);
    getline(cin,str2);
    getline(cin,str);

    shuffle(str1,str2,str);
    return 0;
}
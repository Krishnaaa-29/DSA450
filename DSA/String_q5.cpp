#include <bits/stdc++.h>
using namespace std;

//TO check if a string is a rotation of itself

int Rotation(string str1, string str2){
    
    if(str1.length() != str2.length()){
        cout<<"It is not a Rotation";
        return 0;
    }

    string temp = str1.append(str1);
    cout<<temp<<endl;

    if (temp.find(str2) != string::npos)
    {
        cout<<"It is a Rotation";
    }
    
    else{
        cout<<"It is not a Rotation";
    }

    return 0;
}

int main(){

    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);

    Rotation(str1,str2);
    return 0;
}
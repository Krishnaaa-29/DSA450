#include <bits/stdc++.h>
using namespace std;

class TrieNode {

    public:

    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){

        data = ch;
        for(int i = 0; i<26; i++){

            children[i] = NULL;
        }

        isTerminal = false;
    }
};

class Trie {

    public:

    TrieNode* root = new TrieNode('\0');

    void Insert(TrieNode* root, string word){

        if(word.length() == 0){

            root->isTerminal = true;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if(root->children[index] != NULL){

            child = root->children[index];
        }

        else{

            child = new TrieNode(words[0]);
            root->children[index] = child;
        }

        Insert(child, words.substr(1));
    }

    void InsertWord(string word){

        Insert(root, word);
    }

    bool search(TrieNode* root, string word){

        if(words.length() == 0){

            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if(root->children[index] != NULL){

            child = root->children[index];
        }

        else{

            return false;
        }

        search(child, word.substr(1));

    }

    bool searchword(string word){

        return search(root, word);
    }

};

int main(){

    Trie *t = new Trie();

    t->Insertword({"KRISHNA"});
    t->Insterword("Stupid");
    t->Insertword("HAI");

    cout<<"Present or not: "<<t->search("Stupid");

    return 0;

}
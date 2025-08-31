#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool closeStrings(string word1, string word2) {
    if (word1.length() != word2.length())
        return false;

    int count1[26] = {0}, count2[26] = {0}; //this is for frequency mapping
    bool exist1[26] = {false}, exist2[26] = {false}; //this is for every character is present or not

    for (char c : word1) {
        count1[c - 'a']++;
        exist1[c - 'a'] = true;
    }

    for (char c : word2) {
        count2[c - 'a']++;
        exist2[c - 'a'] = true;
    }

    // Check that both words have the same set of characters
    for (int i = 0; i < 26; i++) {
        if (exist1[i] != exist2[i])
            return false;
    }
    //check for same frequncy matching

    sort(count1, count1 + 26);
    sort(count2, count2 + 26);

    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i])
            return false;
    }

    return true;
}

int main(){
    string str1,str2;
    cout<<"enter first string: ";
    getline(cin,str1);
    cout<<"enter second string: ";
    getline(cin,str2);
    closeStrings(str1,str2);
    return 0;
}
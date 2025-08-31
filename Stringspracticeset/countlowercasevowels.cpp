#include<iostream>
#include<string>
using namespace std;

void countlowercasevowel(string str){
    int len = str.length();
    int vowel_count = 0;
    for(char ch:str){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowel_count++;
        }
    }
    cout<<"the number of lowercase vowel in string is: "<<vowel_count<<endl;
}
int main(){
    string str;
    cout<<"enter any string: ";
    getline(cin,str);
    countlowercasevowel(str);
    return 0;
}
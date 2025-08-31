#include<iostream>
#include<string>
using namespace std;

void permutations(string str,string ans){
    if(str.size()==0){
        cout<<ans<<endl;
        return ;
    }

    for(int i=0;i<str.size();i++){
        char ch = str[i];
        string nextStr = str.substr(0,i) + str.substr(i+1,str.size()-1-i);
        permutations(nextStr,ans+ch);


    }
}

int main(){

    string str = "abc";
    string ans = " ";
    permutations(str,ans);

    return 0;
    
}
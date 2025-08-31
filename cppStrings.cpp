#include<iostream>
#include<string>
using namespace std;

bool instr2(char ch1,string str2){
    for(char ch:str2){
        if(ch==ch1){
            return true;
        }
    }
    return false;
}


void checkanagram(string str1,string str2){
    int count[26] = {0};

    // stores counts of each character of string1
 if(str1.length()==str2.length()){
    for(char ch:str1){
        count[ch-'a']++;
    }

    for(char ch:str2){

        if(count[ch-'a']==0){
            cout<<"is not a valid anagrams"<<endl;
            return ;
        }
        count[ch-'a']--;

    }
    cout<<"is a valid anagrams"<<endl;
}
else{
    cout<<"not a valid anagrams"<<endl;
    return ;
}


 
    

}


int main(){

    // -----string definition -----//


    // string str = "hello";
    // cout<<str<<endl;
    // str = "yellow";
    // cout<<str<<endl;


    //------input from user----//

    // string str;
    // cout<<"enter a string: ";
    // // cin>>str; // only take upto whitespaces

    // getline(cin,str,'$'); // take input as string with whitespaces and stop taking input at dollar

    // cout<<"entered string is: "<<str<<endl;
    //  cout<<"characters of strings are: "<<endl;

    //eurning index value
    // method-1 --> for each loop

    // for(char ch:str){
    //     cout<<ch<<" ";
    // }

    

    // //---calculating length of string

    // int i = 0,len=0;
    // while(str[i++]){
    //     len++;
    // }

    //normal for loop
   

    // for(int i=0;i<len;i++){  //instead of calculating len yu could have used member function like str.length() to find the same

    //     cout<<str[i]<<endl;
    // }

    //------string member functions-----//

    // string str;
    // cout<<"enter a string: ";
    // getline(cin,str);

    // int len = str.length();
    // cout<<"length of string is: "<<len<<endl;
    // cout<<"character at specific index 3 is "<<str.at(3)<<endl;

    // cout<<"the one of the substring of entered string is: "<<str.substr(1,6)<<endl;

    // cout<<str.find("c++")<<endl; //returns starting idx of first occurence of this word if it is not in string returns -1
    // cout<<"the first occurence of word c++ after particular index 20 is: "<<str.find("c++",20)<<endl;



    //-----valid anagram----//

    // method-1 //---brute  force--//

    // string str1;
    // cout<<"enter first string: ";
    // getline(cin,str1);
    // string str2;
    // cout<<"enter another string to check anagram: ";
    // getline(cin,str2);
    // if(str1.length()==str2.length()){
        
    //     for(char ch:str1){
    //         if(!instr2(ch,str2)){
    //         cout<<"is not a valid anagrams"<<endl;
    //         return 0;
    //     }
    //     }
    //      cout<<"is a valid anagrams"<<endl;
    // }

    // else{
    //     cout<<"is not a valid anagrams"<<endl;
    // }


    // valid anagrams method-2

    // string str1;
    // cout<<"enter first string: ";
    // getline(cin,str1);
    // string str2;
    // cout<<"enter another string to check anagram: ";
    // getline(cin,str2);

    // checkanagram(str1,str2); //function call

  // use of operators in string

    string str1;
    cout<<"enter first string: ";
    getline(cin,str1);
    string str2;
    cout<<"enter another string to check anagram: ";
    getline(cin,str2);
     cout<<(str1==str2)<<endl; //return true or false in terms of 0 or 1
   cout<<(str1<str2)<<endl; //again same true or false according to character wise comparison



    

    return 0;
}
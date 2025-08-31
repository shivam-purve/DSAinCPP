#include<iostream>
#include<string>
using namespace std;

string removeDuplicates(string str,string ans,int i,bool map[]){
    if(i == str.length()){
        return ans;
    }

    if(!map[str[i]-'a']){ //if that particular character is not there in answer string so we are checking thatby taking bool map character array
        ans += str[i];
        map[str[i]-'a'] = true;
    }

   return  removeDuplicates(str,ans,i+1,map);

   
    return ans;


}

int main(){
    string str,ans = " ";
    cout<<"enter any string: ";
    getline(cin,str);
    int idx = 0;
    bool map[26] = {false};

   string ans_str =  removeDuplicates(str,ans,idx,map);

   cout<<"unique string is afetr removal of duplicares : "<<ans_str<<endl;


   return 0;

}
#include<iostream>
#include<string>
using namespace std;

int countsubstr(string str,int st,int end,int count){
       

        

    if(end==str.length()){
        st += 1;
        end = st;

    }
    if(st==str.length()){
            return count;
        }



    if(str[st]==str[end]){
        count++;
    }
    return countsubstr(str,st,end+1,count);

}

int main(){
    string str;
    cout<<"enter a string: ";
    getline(cin,str);
    int ans = countsubstr(str,0,0,0);
    cout<<ans<<endl;

    return 0;
    
}
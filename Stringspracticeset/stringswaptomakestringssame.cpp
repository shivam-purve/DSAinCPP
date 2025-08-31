#include<iostream>
#include<string>
using namespace std;

bool isPossibleswap(string str1,string str2){
    if(str1==str2){  //as we want atmost one swap so here already equal no(0) swap so return true
        cout<<"true it is possible to make strings same"<<endl;
        return true ;
    }
    else if(str1.length()==str2.length()){
        int len = str1.length();
        int count_distinct = 0;
        int arr[1000],idx=0;
        for(int i=0;i<len;i++){
           if( str1[i]!=str2[i]){
            count_distinct++;
            arr[idx++]=i;

           }

        }
        //idx updated to 2 if there is only two distinct
        if(count_distinct==2&&idx==2){
            swap(str1[arr[0]],str1[arr[1]]);
            if(str1==str2){
             cout<<"true it is possible to make strings same and the index that should be interchange are: "<<arr[0]<<" and "<<arr[1]<<endl;
             return true;
            }
            else{
                 cout<<"false,its not possible to make them"<<endl;
                return false;

            }
        }
        else{
            cout<<"false,its not possible to make them same by atmost one swap"<<endl;
            return false ;
        }
           

    }
    else{
        cout<<"false,its not possible to make them same by atmost one swap"<<endl;
            return false;
        
    }
}

int main(){
    string str1,str2;
    cout<<"enter first string: ";
    getline(cin,str1);
    cout<<"enter second string: ";
    getline(cin,str2);
    isPossibleswap(str1,str2);
    return 0;
}
#include<iostream>
using namespace std;

void indices(int *arr,int n,int st,int key){
    if(st==n){
        return ;
    }

    if(arr[st]==key){
        cout<<st<<" ";
        
    }
    indices(arr,n,++st,key);
}

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter key: ";
    cin>>key;


    indices(arr,n,0,key);

    return 0;
}
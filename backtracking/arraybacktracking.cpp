#include<iostream>
using namespace std;


void printArray(int arr[],int n ){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void changeArray(int arr[],int n,int i){

    if(i==n){
        printArray(arr,n);
        return ;
    }
    arr[i] = i+1;
    changeArray(arr,n,i+1);
    arr[i]-= 2;  //backtracking steps

}

int main(){

    int arr[5] = {0};
    changeArray(arr,5,0);
    printArray(arr,5);
    return 0;


}
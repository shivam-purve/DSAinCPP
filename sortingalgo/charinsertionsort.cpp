
#include<iostream>
using namespace std;

void insertionsortdessending(char *arr,int n){
    for(int i=1;i<n;i++){
        char curr_ch = arr[i];
        int prev = i-1;
        while(prev>=0&&arr[prev]<curr_ch){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr_ch;
    }
}

int main(){
    int n;
    cout<<"enter number of characters: ";
    cin>>n;

    char arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsortdessending(arr,n);

    cout<<"after sorting in to dessending array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
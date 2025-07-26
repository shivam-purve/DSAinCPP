#include<iostream>
using namespace std;

void printSubarrays(int *arr,int n){

    cout<<"all the subarrays are: "<<endl;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    

}

int main(){
    int n;
    cout<<"enter value for n:";
    cin>>n;
    cout<<"enter array elements: "<<"\n";

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printSubarrays(arr,n);
return 0;
}
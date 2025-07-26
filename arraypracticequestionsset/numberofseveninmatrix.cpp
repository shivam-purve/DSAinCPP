#include<iostream>
using namespace std;


void countkey(int arr[][3],int n,int m,int key){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                count++;

            }
        }
    }
    cout<<"number of "<<key<<" in given matrix is "<<count<<endl;
}


int main(){
    int n;
    cout<<"enter number of rows: "<<endl;
    cin>>n;
   const int m=3;
    cout<<"the column number is fixed to 3."<<"\n";
     int arr[n][m];
    cout<<"enter the array elements for "<<n<<" x "<<3<<" matrix "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"enter key yu want to count in given matrix: "<<endl;
    cin>>key;
    countkey(arr,n,m,key);
    return 0;
}
#include<iostream>
using namespace std;

void transpose(int arr[][3],int row,int m){
    const int n = row;
    int tran_arr[3][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            tran_arr[i][j]=arr[j][i];
        }
    }
    cout<<"transpose of given matrix is :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<tran_arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return ;
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

    transpose(arr,n,m);
    return 0;

}


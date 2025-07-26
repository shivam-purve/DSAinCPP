#include<iostream>
using namespace std;


void make2Darray(int *arr,int row,int col,int num){
  if(num!=row*col){
    cout<<"empty 2D array will return out "<<endl;
    return ;

  }
  int idx = 0;
  const int m = row;
  const int n = col;
  int twoDarr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        twoDarr[i][j]=arr[idx++];
        
    }
  }
  cout<<"newly formed 2D arry is: "<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<twoDarr[i][j]<<" ";
    }
    cout<<endl;
}
return ;
}
    


int main(){
    int num;
    cout<<"enter number of elemnts in 1D array: ";
    cin>>num;

    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }

    int m,n;
    cout<<"enter numbe of rows for 2D array: ";
    cin>>m;
    cout<<"enter number of columns for 2D arry: ";
    cin>>n;

    make2Darray(arr,m,n,num);
    return 0;


}
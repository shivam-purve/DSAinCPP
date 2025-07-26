#include<iostream>
using namespace std;

void bruteforcesearchkey_sortedmatrix(int arr[][4],int n,int m,int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                cout<<"the key element is at "<<i<<"th row "<<" and "<<j<<"th column in the matrix "<<endl;
                return ;
            }
        }
    }
    cout<<"-1";
    return ;
    
}

void rowbinarysearch(int arr[][4],int n,int m,int key){

    //////----T.C = O(n*logm)........//
    for(int i=0;i<n;i++){ //O(n)
        int scol = 0,ecol = m-1;
        while(scol<=ecol){ // o(logm)..//
            int mid = scol + (ecol-scol)/2;
            if(arr[i][mid]==key){
                 cout<<"the key element is at "<<i<<"th row "<<" and "<<mid<<"th column in the matrix "<<endl;
                return ;
            }
            else if(arr[i][mid]<key){  //sorted in assending
                   scol = mid+1;
            }
            else{
                ecol = mid-1;
            }
        }
    }
    cout<<"-1"; // it shows key isnt in given matrix
}

void staircasesearch(int arr[][4],int n,int m,int key){
    int row = 0,col = m-1;//r = row,col = column // starting from special shell
    while(row<n&&col>=0){
        int st_cell = arr[row][col];
        if(st_cell == key){
            cout<<"the key element is at "<<row<<"th row "<<" and "<<col<<"th column in the matrix "<<endl;
                return ;

        }
        else if(st_cell>key){
            col--;
        }
        else{
            row++;
        }
    }
    cout<<"-1"; // the key isnt in the array itself
}











int main(){
    int n, m = 4;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Number of columns is fixed to 4." << endl;

    int mat[n][4];  // This is allowed by GCC (VLA), not standard C++ — best to use fixed n too if needed.

    cout << "Enter the matrix elements (" << n << "x4):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> mat[i][j];
        }
    }
    int key;
    cout<<"enter key yu want to search: "<<endl;
    cin>>key;

    // bruteforcesearchkey_sortedmatrix(mat, n, m,key);
    // rowbinarysearch(mat,n,m,key);

    staircasesearch(mat,n,m,key);
    return 0;

} 
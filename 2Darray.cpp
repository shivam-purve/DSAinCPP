#include<iostream>
using namespace std;

void func(int mat[][4],int n,int m){
    //-----------//
    // cout<<"0th row pointer "<<mat<<endl;
    //  cout<<"1st row pointer "<<mat+1<<endl;
    //   cout<<"2nd row pointer "<<mat+2<<endl;

    cout<<"0th row value "<<*(mat)<<endl;
     cout<<"1st row value "<<*(mat+1)<<endl;
      cout<<"2nd row value "<<*(mat+2)<<endl;

      cout<<*(*(mat+2)+2)<<endl;
}

void func2(int (*mat)[4],int n, int m){
    //....//
}

/// intro to 2D array:--//

int main(){
    // int students_marks[3][3] = {{100,100,100},{85,74,89},{63,72,65}};
    // cout<<students_marks[1][1]<<endl; /// accessing index value in 2D array...//

//     int n = 3,m = 4;
//    int arr[n][m]; // rows = n =3;columns = m=4//---//
//     cout<<"enter elements of array: "<<endl;
//    for(int i=0;i<n;i++){
//      for(int j=0;j<m;j++){
//         cin>>arr[i][j];
//      }

//    }

   

//     cout<<"enter elements of array: "<<endl;
//    for(int i=0;i<n;i++){
//      for(int j=0;j<m;j++){
//         cout<<arr[i][j]<<" ";
//      }
//      cout<<"\n";

//    }

   ////------2Darray ponters........//

   int mat[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

   func(mat,4,4);










//    cout<<mat<<endl; // it will point to 1st row
//     /// let say it print something 0x---y

//    cout<<mat+1<<endl; /// it will point to 2nd row....//
//     //then it will print ox----(y+16)









   return 0;
}






    
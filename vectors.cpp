#include<iostream>
#include<vector>
using namespace std;


int* func(){
    int *ptr = new int;
    *ptr = 1200;
    cout<<"ptr points to "<< *ptr <<endl;
    return ptr;
}

void funcInt(){
    int *ptr = new int;
    *ptr = 5;
    cout<<*ptr;

    delete ptr;
}

void funcarr(){

 int size;
    cout<<"enter size of array: ";
    cin>>size;

    int *ptr = new int[size];

    int x=1;

    for(int i=0;i<size;i++){
        ptr[i]=x;
        x++;
    }
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<" ";
    }

    delete [] ptr; //free space in 
}


int main(){

    // creating a 1D Dynamic array----//

//    funcarr(); //function call

   //  in this case when after return from func function the pointer created in stack memory in func stack frame will be deleted along with pointer variable pointing to array created dynamically in heap memory


    //lets see example of memory leak//

    // int* x = func();
    // cout<< *x <<endl;


    ///----------2D  DYNAMIC ARRAY------//

    // int rows,cols;
    // cout<<"enter number of rows: ";
    // cin>>rows;
    // cout<<"enter number of columns: ";
    // cin>>cols;

    // creating first 1D array for pointers pointing to rows of matrix

    // int* *matrix = new int*[rows];

    // for(int i=0;i<rows;i++){
    //     matrix[i] = new int[cols]; //here creating again 1D array of columns for each row in matrix
    // }

    // //data store
    //  int x = 1;
    //  for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         matrix[i][j] = x; // equivalent to ->   *(*(matrix + i) + j)  //
    //         cout<<matrix[i][j]<<" ";
    //         x++;
    //     }
    //     cout<<endl;
    //  }


  ///------------VECTOR-----------///

  //------INTRO---//

//   vector<int> vec1 = {1,2,3,4};
//   vector<int> vec2(5,-1); // initialsed vec2 with -1
//   cout<<vec1.size()<<" "<<endl;

//   for(int i=0;i<vec2.size();i++){
//     cout<<vec2[i]<<" ";
//   }


///-----size and capacity----//

// vector<int>vec;
// vec = {1,2,3,4};

// cout<<"size: "<<vec.size()<<" "<<endl;
// cout<<"capacity: "<<vec.capacity()<<" "<<endl;

// vec.push_back(5); // adds eleent to last idx of vector

// cout<<"after pushing back 5 to older array new vectors have: "<<endl;

// cout<<"size: "<<vec.size()<<" "<<endl;
// cout<<"capacity: "<<vec.capacity()<<" "<<endl;

// vec.pop_back(); //deletes last elemnet from vector


 // 2D vector---//

//    vector<vector<int>> matrix = {{1,2,3},{4,5,6,7},{7,8,9},{10,11,12}}; // all rows dont need to be of same column size

//    for(int i=0;i<matrix.size();i++){ // matrix.size() -> gives number of rows
//     for(int j=0;j<matrix[i].size();j++){ // matrix[i].size() -> gives number of columns
//         cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;

//    }





  
  








    return 0;
}
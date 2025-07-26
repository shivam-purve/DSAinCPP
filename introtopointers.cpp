#include<iostream>
using namespace std;

///----pass by value---//
// void changeA(int a){
//     a = 20;
//     cout<<"in changeA function a is "<<a<<endl;
// }


//----pass by reference by pointer

// void changeA(int *ptr){
//     *ptr = 20;
//     cout<<"a in changeA function is "<<*ptr<<endl;
// }


//---------pass by reference by reference var..--------//

void changeA(int &para){
    para = 20;
    cout<<"in changeA function a is "<<para<<endl;
}











int main(){
    // int a = 10;
    // int *ptr = &a;
     // stores hexadecimal address of variable
    //  float pi = 3.14;
    //  float *ptr1 = &pi;
    // // cout<<&a<<"\n";
    // cout<<ptr;

    // cout<<ptr1<<endl;
    // cout<<&pi<<endl;

    /// space i mean how many bytes--//

    // cout<<sizeof(ptr)<<endl<<sizeof(ptr1)<<endl;


    // int **pptr = &ptr;

    // cout<<&ptr<<" = "<<pptr<<endl; //stores address of pointer variable
    // cout<<&a<<" = "<<ptr<<endl; //stores address of variable a.


    //--------print and acess variable value using pointer--//
    //  cout<<&a<<"\n";
    // cout<<*(&a)<<endl;

    //modify---//
    // *ptr = 20;

    // cout<<a<<"\n";
        

    // int *ptr = NULL;
    // cout<<ptr<<endl;
    // cout<<*(ptr)<<endl; //wrong segmentation fault




  ////-----------pass by value-----//

//   int a = 10;
//   cout<<" a before changeA is "<<a<<endl;
//   changeA(a);

//   cout<<"a after changeA is "<<a<<endl;



//-------pass by reference by using pointer----//

// int a = 10;
//   cout<<" a before changeA is "<<a<<endl;
//   changeA(&a);

//   cout<<"a after changeA is "<<a<<endl;


//----------pass by reference by using reference variables-------//

int a =10;
int &b = a;
changeA(a);

cout<<a<<endl;


// int a = 10;
//   cout<<" a before changeA is "<<a<<endl;
//   changeA(a);

//   cout<<"a after changeA is "<<a<<endl;











    return 0;

}

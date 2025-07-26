#include<iostream>
using namespace std;

// void func(int arr[]){
//     arr[0]=1000;
// }

// void func2(int *ptr){
//     ptr[0] = 1000;
// }

// void printArr(int arr[],int n){  //we will always also give parameter as size of array so that it would not creae a conflict of sizeof(arr) = 8bytes as size of pointer which ponts to first input of array

  

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int findele(int arr[],int ele,int size){
//     int n = size;
    
//     for(int i=0;i<n;i++){
//         if(arr[i]==ele){
//            return i;
//         }
//     }
//     return -1;
// }


//--reverse array--//

// void reverseArr(int *arr,int n){
//     int duparr[n];
//     for(int i=n-1;i>=0;i--){
//         duparr[n-i-1] = arr[i];

//     }
//     for(int i=0;i<n;i++){
//         arr[i] = duparr[i];
//     }

// }


//------two pointer approach----(reverse array)-------//

// void reverseArr(int *arr,int n){
//     int st=0,end = n-1;
//     while(st<end){
//         int temp = arr[st];
//         arr[st]=arr[end];
//         arr[end]=temp;
//         st++;
//         end--;
//     }
// }

//---------binary search--------//

// int binarysearch(int *arr,int key,int n){
//     int st=0,end=n-1;
   
//     while(st<=end){
//          int mid = st + (end-st)/2;
//          if(arr[mid]==key){
//             return mid;
//          }
//          else if(arr[mid]>key){
//             end = mid-1;
//          }
//          else{
//             st = mid +1;
//          }
         

//     }
//     return -1;
// }

////---printArr function for array arithmetic---//

void printArr(int *ptr,int n){
    for(int i=0;i<n;i++){
        cout<<*(ptr + i)<<" ";
    }
}

















int main(){
    // int marks[50];    // 1st way of array initialisation

    //    int marks[50] = {1,2,3};   // 0th index = 1,1st index = 2,2nd index = 3;also now here only three value will get value as declared but here all 3 to 49 indices will give zero only by defalut

    //    int marks[] = {1,2,3}  //automatically size = 3 but this happens only when yu initiaise the array at time f declatarion

//    int marks[5] = {1,2,3,4,5};
//    cout<<sizeof(marks)<<endl;  //this will not actually gives size it will give total bytes
//    //  i.e 4bytes*5 = 20bytes

//    //for length we can divide sizeof(marks)/sizeof(int)

//   int n = sizeof(marks)/sizeof(int);   // give 20bytes/4bytes = 5 so size of array is 5
//   cout<<n<<endl;

///--------ouput array through loop----//
// int arr[5] = {1,3,5,78,45};
// int n = sizeof(arr)/sizeof(int);

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

//--------input through loop for aray---------//

// int n;
// cout<<"enter size of array: ";
// cin>>n;

// int arr[n] ;

// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// cout<<"array elements are: "<<endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }




///----Q1.  finding largest element in an array-------//




// int n;
// cout<<"enter size of array: ";
// cin>>n;

// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// int largest = arr[0];
// int smallest = arr[0];
// for(int i=0;i<n;i++){
//     if(arr[i]>largest){
//         largest = arr[i];
//     }
//     if(arr[i]<smallest){
//         smallest = arr[i];
//     }
// }

// cout<<"the largest of all is "<<largest<<endl;
// cout<<"the smallest of all is "<<smallest<<endl;


// }



////examples for pointers in array---//




// int n;
// cout<<"enter size of array: ";
// cin>>n;

// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// func(arr);   /// call by reference

// cout<<"array elements after updation: "<<endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }



/// understanding of also giving size of array as argument :-//-------//
// int n;
// cout<<"enter size of array: ";
// cin>>n;

// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// printArr(arr,n);
// return 0;



///-------LINEAR SEARCH---------///

// int n;
// cout<<"enter size of array: ";
// cin>>n;

// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// int ele;
// cout<<"enter element you want to search: ";
// cin>>ele;
// int res = findele(arr,ele,n);
// if(res!=(-1)){
//     cout<<"the element is at index "<<res<<" in given array"<<endl;
// }
// else{
//     cout<<"the required element isnt in array"<<endl;
// }
// return 0;
// }



//----------REVERSE AN ARRAY WITH USING EXTRA SPACE---------//





// int n;
// cout<<"enter size of array: ";
// cin>>n;

// int arr[n];
// cout<<"enter elements for array: "<<endl;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// reverseArr(arr,n);
// // printing reverse array---//
// cout<<"array after reversal is: "<<endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }


///---------two pointer approach----//

// int n;
// cout<<"enter size of array: ";
// cin>>n;

// int arr[n];
// cout<<"enter elements for array: "<<endl;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// reverseArr(arr,n);
// // printing reverse array---//
// cout<<"array after reversal is: "<<endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }


///----binary search-----//


// int n;
// cout<<"enter size of array: ";
// cin>>n;

// int arr[n];
// cout<<"enter elements for array: "<<endl;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// int key;
// cout<<"enter key yu want to search: ";
// cin>>key;

// int res = binarysearch(arr,key,n);
// if(res!=(-1)){
//      cout<<"the required key is at "<<res<<"th"<<" index"<<endl;
// }
// else{
//     cout<<"the required key is not in given array "<<endl;
// }


// return 0;
// }




/////--------------POINTER ARITHMETIC--------//

//. 1 POINTER ARITHMETIC----//

// int a = 10;
// int *aptr = &a;

// cout<<aptr<<"\n";
// aptr++; // basically it will plus 4byte equivalent to datatype(here int)
// cout<<aptr<<"\n";
// aptr--;
// cout<<aptr<<"\n"; /// on ptr-- same it will decrease as byte as of datatype
// return 0;
// }


//2. adition and subracton of constants to pointers

// int a = 5;
// int *ptr = &a;
// cout<<ptr<<"\n";
// ptr+=3;
// cout<<(ptr - 3)<<"\n"; // will add 12 bytes more
// return 0;
// }


// using the same in array traversal

// int arr[5] = {2,4,6,8,9};
// int n = sizeof(arr)/sizeof(int);
// printArr(arr,n);
// return 0;
// }

//3.addn and subn of pointers------//

// int a = 5;
// int *ptr1 = &a;
// int *ptr2 = ptr1 + 3;// basically it points 3 integer spaces i.e 12 bytes afterwards from ptr1 points
// cout<<ptr2<<"\n";
// cout<<ptr1<<"\n";

// cout<<(ptr2-ptr1)<<"\n";
// return 0;
// }

// applying same on array:-/////


// int arr[5] = {1,2,3,4,5};
// int *ptr1 = arr; /// this also means arr + 0 so poins to integer 1
// int *ptr2= arr+3; // points to integer 4 at index arr + 3

// cout<<ptr2<<endl;
// cout<<ptr1<<"\n";

// cout<<(ptr2-ptr1)<<"\n"; // gives gap between integers i.e b/tw 1 and ineger 4 i.e index 0 and index 3 so mid inegers are 3

// return 0;
// }


///4. comparison

int arr[5] = {1,2,3,4,5};
int *ptr1 = arr; //points to 1
int *ptr2 = ptr1 +3;//points to 4

int *ptr3 = ptr2 - 1; //points to 3

cout<<(ptr2>ptr1)<<endl;  // as it is contigous allocation of memory so ptr2>ptr1 so it is true will print 1
cout<<(ptr3>ptr2)<<endl;
 // will print 0 as false
 cout<<(ptr1==ptr2)<<"\n";
 cout<<(ptr1==arr)<<"\n";

 return 0;
}
    


#include<iostream>
using namespace std;
#define ll long long

int main(){

    //--------constants------//


    // const int num = 25;   // constant must be initialised at time of declaration

    // int num2 = 35;
    // const float PI = 3.14;
    // const float g = 9.8;

    // ll x;
    // ll y = 25;
    // cout<<y;

      //---------implicit typecasting------//

    // cout << (10/3)<<endl;
    // cout << (10/3.0)<<endl;  
      //-------- order of type promotion is --- bool->char->int->float->double 
    // cout<<'A'+1; 
    //65 + 1 = 66

    // cout<<('A'-0)<<endl;
    // cout<<('a'-0)<<endl;

      //-----explicit type-------//


    //   char ch = 'A';
    //   cout<<(int)(ch)<<endl;

    //   float PI = 3.14;
    //   cout<<(int)(PI)<<endl;

    //   cout<<(10/3)<<endl; // will just give 3

    //   cout<<((float)(10)/3)<<endl; // will give 3.33

    //   cout<<(char)('A'+ 1)<<endl;

        //---practice q's-----//

//    cout<<(bool)3+2<<endl;
//    cout<<(23.5 + 2 + 'A');





    

   // --------------- OPERATORS-----////---ARITHMETIC OPERATORS-------//---//

//   int a = 3;
//   int b = 5;
//   cout<<"+ "<<(a + b)<<endl; //8
//   cout<<"- "<<(b - a)<<endl; //2
//   cout<<"* "<<(a * b)<<endl; //15
//   cout<<"/ "<<(a / b)<<endl; //0
//   cout<<"% "<<(a % b)<<endl; //3 (modulo operator) gives remainder

     //------unary operators------//


    //  int a = 3;
    //  a = a  + 1; //OR a++ i.e a=a+1;
    //  cout<<"a= "<<a<<endl;
    //  a = a - 1; //OR a-- i.e a=a-1;
    //  cout<<"a= "<<a<<endl;

     //---example---//

    //  int a = 3;
    //  int b = ++a; // pahle a ka value increase hoga tab jake "b" me assign hoga i.e pre-increment
    //   cout<<"a = "<<a<<endl;
    //   cout<<"b = "<<b<<endl;

    //  int a = 3;
    //  int b = a++; //pahle "b" me "a" ka previus value assign ho jayega yaani 3 and then "a" ka value aage wale calculations ke liye badh jayega i.e 4
    //   cout<<"a = "<<a<<endl;
    //  cout<<"b = "<<b<<endl;



    ////----------ASSIGNMENT OPERATORS-------//--------//
    
//     int a = 10;
//     a += 5;
//     cout<<a<<endl; // a = a+5; // 15
//     a -= 5; // a = a-5; 15-5=10
//   cout<<a<<endl;
//    a*=5; //a=a*5; //a=50;
//    cout<<a<<endl;
//    a/=5; // a=50/5=10;
//    cout<<a<<endl;




  ///----------RELATIONAL OPERATORS---//

//   int a = 3;
//   int b= 5;
//   cout<<(a>b)<<endl; //false->0
//   cout<<(a<b)<<endl; //true->1


//   int a = 3;
//   int b = 3;
//   cout<<(a>=b)<<endl; //true->1
//   cout<<(a<=b)<<endl; //true->1
//   cout<<(a==b)<<endl; //true->1
//   cout<<(a!=b)<<endl; //false->0


  ///-------logical operators--------//

//   cout<<((3<5)&&(10>5))<<endl; //true and true gives true only
//   cout<<((5>4)||(3!=3))<<endl; //true or false gives true

//   cout<< (!(3==5))<<endl; // negation of false is true





    return 0;
}
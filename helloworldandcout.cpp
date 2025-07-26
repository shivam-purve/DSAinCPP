#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // cout<<"Hello world";

    // print pattern using just cout 

    // cout<<"****"<<endl;
    // cout<<"***"<<endl;
    // cout<<"**"<<endl;
    // cout<<"*"<<endl;

         //OR
    // cout<<"****\n***\n**\n*\n";

    // practice

    // int a = 10;
    // int b = 5;
    // cout<<"a = "<< a <<endl;
    // cout<<"b = "<< b <<endl;

    // data types 

    // int age = 25;
    // char grade = 'A';
    // int marks = -200;
    // bool isAdult = true;
    // float cgpa = 9.17;
    // double price= 99.999345;

    // cout<<age<<" "<<marks<<" "<<grade<<" "<<isAdult<<endl;

    // cout<<"size of integer = "<<sizeof(int)<<endl;
    //  cout<<"size of character = "<<sizeof(char)<<endl;
    //  cout<<"size of boolean = "<<sizeof(bool)<<endl;
    //    cout<<cgpa<<endl;
    //    cout<<price<<endl;
    //  cout<<"size of float = "<<sizeof(float)<<endl;

    //   cout<<"size of double = "<<sizeof(double)<<endl;

    // float PI = 3.14159265359;
    // double PI2 = 3.14159265359;

    // cout<<setprecision(12)<<"PI = "<<PI<<endl;  // cout precision is bydefault upto 5 only so increase
    //                           //to increase the recision we will include new header file that is #include<iomanip> which contains a function 
    //                           //setprecision(12)
    //  cout<<setprecision(12)<<"PI2 = "<<PI2<<endl;

       //--------input in c++---------//


//    int age;
//    cout<<"enter your age: ";
//    cin>>age;

//    cout<<"your age is "<<age<<endl;
            
              //------sum of a and b----------//

//    float a,b;
//    cout<<"enter first number: ";
//    cin>>a;
//    cout<<"enter second number: ";
//    cin>>b;

//    float sum = a + b;
//    cout<<"sum of " <<a << " and " << b <<" is "<< sum<<endl;


                   //---------average of three marks------//
    float math_marks,science_marks,social_marks;
    cout<<"enter your math marks: ";
    cin>>math_marks;

    cout<<"enter your science marks: ";
    cin>>science_marks;

    cout<<"enter your social marks: ";
    cin>>social_marks;

    float avg = (math_marks + science_marks + social_marks )/3;

    cout<<"the average of three of your subject math science and social is: " << avg<<endl;

    return 0;
}
#include <iostream>
using namespace std;
 int main(){
    // int age ;
    // cout<<"enter your age: ";
    // cin>>age;

    // if(age>=18){
    //     cout<<"can vote "<<endl;
    // }
    // else{
    //     cout<<"can't vote "<<endl;
    // }

    //----small programme----/

    // float mark_student;
    // cout<<"enter your marks: ";
    // cin>>mark_student;

    // if(mark_student >= 33){
    //     cout<<"pass "<<endl;
    // }
    // else{
    //     cout<<"fail "<<endl;
    // }



    ////------------PRACTICE QUESTIONS-----------//


    /// largest of two numbers---

    // float a,b;
    // cout<<"enter first number: ";
    // cin>>a;
    // cout<<"enter your second number: ";
    // cin>>b;

    // if(a>b){
    //     cout<<a<<"  is largest"<<endl;
    // }
    // if(a==b){
    //     cout<< a <<"  and "<<b<<" both is equal"<<endl;
    // }
    // if(b>a){
    //     cout<<b<<" is largest"<<endl;
    // }


    //----------odd or even-----//

    // int num;
    // cout<<"enter value of number: ";
    // cin>>num;

    // if(num%2==0){
    //     cout<<"given value is even "<<endl;
    // }
    // else{
    //     cout<<"given value is odd "<<endl;
    // }




    //---------else-if statement------//

    // int student_mark;
    // cout<<"enter your marks: ";
    // cin>>student_mark;

    // char grade;

    // if(student_mark>=90){
    //     grade = 'A';
    // }
    // else if(student_mark>=80){
    //     grade = 'B';
    // }
    // else{
    //     grade = 'C';
    // }

    // cout<<"student grade is "<<grade <<endl;


    

        ///-----------practice Q-----------///


        //--------------INCOME TAX CALCULATOR----////

//     int income;
//     cout<<"enter your annual income(in lakhs): ";
//     cin>>income;
//     float tax;

//     if(income <=5){
//         tax = 0;

//     }
//     else if(income<=10){
//         tax = income*0.2;
//     }
//     else{
//         tax = income*0.3;
//     }

//     cout<<"Tax imposed on your annual income is "<<tax<<" lakhs"<<endl;

  

    //---------largest of three numbers----//


  // method-1


    // int a,b,c;
    // cout<<"enter first number: ";
    // cin>>a;


    //  cout<<"enter second number: ";
    //  cin>>b;

    //   cout<<"enter third number: ";
    //   cin>>c;

    //   int largest;

    //   if(a>b){
    //     if(a>c){
    //         largest = a;

    //     }
    //     else{
    //         largest = c;
    //     }
    //   }
    //   else{ //b>a
    //     if(b>c){
    //         largest = b;
    //     }
    //     else{
    //         largest = c;
    //     }
    //   }

    //   cout<<"largest among "<<a<<" , "<<b<<" "<<"and "<<c<<" is "<<largest<<endl;

     
      

        ////----method-2-----///






    //    int a,b,c;
    // cout<<"enter first number: ";
    // cin>>a;


    //  cout<<"enter second number: ";
    //  cin>>b;

    //   cout<<"enter third number: ";
    //   cin>>c;

    //   int largest;

    //   if((a>=b) &&(a>=c)){
    //     largest = a;
    //   }
    //   else if(b>c){
    //     largest = b;
    //   }
    //   else{
    //     largest = c;
    //   }

    //    cout<<"largest among "<<a<<" , "<<b<<" "<<"and "<<c<<" is "<<largest<<endl;

      
    //  ternary operators-----//

    // bool isAdult; // 1 or 0

    // int age;
    // cout<<"enter age: ";
    // cin>>age;

    // isAdult = (age >= 18) ? true:false;
    // if(isAdult){
    //     cout<<"can vote"<<endl;
    // }
    // else{
    //     cout<<"can't vote"<<endl;
    // }



    //----largest of two numbers----//

    // int a,b;
    // cout<<"enter first number: ";
    // cin>>a;
    // cout<<"enter second number: ";
    // cin>>b;

    // int largest;
    // largest = (a>=b) ? a:b;
    // cout<<"largest number among two is "<<largest<<endl;

  
    //------switch statement-------///


    // int day;
    // cout<<"enter day as integer(from 1 to 7): ";
    // cin>>day; // this will take from 1 to 7 input in integer

    // switch(day){
    //   case 1 : cout<< "Monday" <<endl; /// if day==1 then it will print Monday
    //                                    //simillarly it will go for all.
    //         break; 
    //   case 2 : cout<< "Tuesday" <<endl;
    //         break; 
    //   case 3 : cout<< "Wednesday" <<endl;
    //         break; 
    //  case 4 : cout<< "Thursday" <<endl;
    //         break; 
    // case 5 : cout<< "Friday" <<endl;
    //         break; 
    // case 6 : cout<< "Saturday" <<endl;
    //         break; 
    // case 7 : cout<< "Sunday" <<endl;
    //         break; 
    // default: cout<<"Invalid Day"<<endl;
    

    // }



    //---------Buiding a calculator-----------///


      float a,b;
      cout<<"enter first operand: ";
      cin>>a;
      cout<<"enter second operand: ";
      cin>>b;

      char operation_symbol;
      cout<<"enter operation yu want (in symbol like + , -, * , /): ";
      cin>>operation_symbol;

      switch(operation_symbol){
        case '+' : cout<< a+b<<endl;
           break;
        case '-' : cout<< a-b<<endl;
           break;
        case '*' : cout<< a*b<<endl;
           break;
        case '/' : cout<< a/b<<endl;
           break;
        default : cout<<"invalid operation symbol "<<endl;
      }
      
      return 0;


 }
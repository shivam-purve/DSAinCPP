#include<iostream>
using namespace std;
#include<cstring>



void toUpper(char word[]){
    int n = strlen(word);
     for(int i=0;i<n;i++){
      char ch = word[i];
        if(ch>='a'&&ch<='z'){
          word[i]-=32; //implicit typecasting first char to int and then again at that ascii value again typecasting tochar //here dont use ch as it is just copy
          } 
   
   }
   


}

void toLower(char word[]){
    int n = strlen(word);
     for(int i=0;i<n;i++){
      char ch = word[i];
        if(ch>='A'&&ch<='Z'){
          word[i]+=32; //implicit typecasting first char to int and then again at that ascii value again typecasting tochar //here dont use ch as it is just copy
          } 
   
   }
   


}


void reverse(char str[]){ //T.C = O(n/2) = O(n)
    int n = strlen(str);
    int st = 0,end = n-1;

    while(st<=end){
        char temp = str[st]; // can also directly use swap(str[st],str[end])
        str[st] = str[end];
        str[end] = temp;
        st++;
        end--;

    }
}
   


// void isPalindrome(char word[]){
//     int n = strlen(word);
//     char str[100];
//     for(int i=0;i<n;i++){
//         str[i]=word[i];

//     }
    
//     char rev_word[100];
//       reverse(word);
    
//      for(int i = 0;i<n;i++){
//         if(str[i]!=word[i]){
//             cout<<"not a palindrome "<<endl;
//             return;
//         }
//      }
//      cout<<"is a valid palindrome "<<endl;
// }

// method-2 for valid palindrome

  void isPalindrome(char str[]){
    int n = strlen(str);
    int st = 0,end = n-1;
    while(st<end){
        if(str[st++]!=str[end--]){
            cout<<"not a valid palindrome"<<endl;
            return ;
        }
    }
    cout<<"is a valid plindrome"<<endl;
  }

int main(){
    // char ch1 = 'a';
    // int ascii1 = (int)(ch1);
    // cout<<ascii1<<endl; // ASCII VALUE ENCODING
    // char ch2 = 'A';
    // int ascii2 = (int)(ch2);
    // cout<<ascii2<<endl;
    // char ch3 = '9';
    // char ch4 = '\n';
    // char ch5 = '%';


    // char ch = 'f';
    // int pos = ch - 'a';  //for finding out position for any characer
    // cout<<pos<<endl;


    //// ------ CHARACTER ARRAY-----////

    // char str[5] = {'a','b','c','d','e'};
    // for(char ch:str){
    //     cout<<ch<<" ";
    // }

    // char str[5] = {'s','h','i','v','\0'};
    // cout<<str; //return whole string

    //string literals -> ex:- "apna college" , "Hello World" , "A"

//--------CHARACTER ARRAY CREATION AND OUTPUT-----//


//     //OR
//  char work[7] =  "shivam"; // 1 character stored for null character
//      //OR
//  char work[]  = {'s','h','i','v','a','m','\0'};
//      //OR
//  char work[100] = {'s','h','i','v','a','m','\0'};

 // input character array//
//    char word[10];
//    cin>>word;

//    cout<<"your word was: "<<word<<endl;
//    cout<<"length of your word is: "<<strlen(word)<<endl;

// input with whitespaces//

//    char name[100];
//    cin.getline(name,100); // using delimiter like // cin.getline(name,100,'*') //stops at firts star input

//    cout<<"your entered name is: "<<name<<endl;
//    cout<<"length of your name is: "<<strlen(name)<<endl;

//    // youncan also output index value of name 

//    cout<<"character in name at particular index 3 is: "<<name[3]<<endl;

   //-------practice question to convert word to uppercase---//

//    char word[100];

//    cout<<"enter a word which yu want it to be in uppercase: "<<endl;
//    cin.getline(word,100); //optimised for whitespaces as well
  
//    toUpper(word);
//cout<<"your word now in uppercase is: "<<word<<endl;

//  //function call
//    toLower(word);
//cout<<"your word now in lowercase is: "<<word<<endl;



///---------REVERSEA CHARACTER ARRAY-----//

// char str[100];
// cout<<"enter a string to reverse: "<<endl;
// cin.getline(str,100);
// reverse(str);
 //cout<<"string in reverse order is: "<<str<<endl;



//  VALID PALINDROME---/

// char word[100];
// cout<<"enter a word: ";
// cin.getline(word,100);

//   isPalindrome(word);


//--------C string Functions-----//

// char str1[100];
// char str2[100] = "shivam purve";
// // str1 = "apna college"; // wrong way to initialise the char array either should have initialised time of declaration or use now strcpy(str1,"apna college");

// strcpy(str1,"apna college"); //first stored apna college in empty char array


// cout<<"initially it was empty now it contains: "<<str1<<endl;
// cout<<"initially, seeing str2 what is already stored there: "<<str2<<endl;

// strcpy(str1,str2);


// cout<<"now let see str1 now contains what as earlier it was apna college there: "<<str1<<endl;
// cout<<"now let see str2 after get copied in to str1 is empty or still shivam purve is there: "<<str2<<endl;

//--------string concatenation------//

// char str1[100] = "shivam "; // i intentionally gave space to store that characer as well in str1 and while concatenate it to str1 space woud be there

// char str2[100] = "purve";

// char str3[100] ;
// strcpy(str3,strcat(str1,str2)); //remeber while concatenate str1 will permanently changed to concatenated string ie shivam purve here it has lost the string shivam but str2 will have no impact it still have purve in it
// cout<<"String after concatenation is: "<<str3<<endl;

//--------str comparison-----// 
char str1[100] = "abc";
char str2[100] = "xyz";
char str3[100] = "abc";
cout<<strcmp(str1,str2)<<endl; //str1<str2 ->  return negative value 
cout<<strcmp(str2,str3)<<endl; //str2>str3 -> return positive value
cout<<strcmp(str1,str3)<<endl; // str1== sr3 -> return zero










    return 0;
}
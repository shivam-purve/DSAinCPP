#include<iostream>
#include<string>

using namespace std;
 class Animal {
   public:
    string color;
     
    void eat(){
        cout<<"eats\n";
    }

    void breathe(){ 

        
        cout<<"breathes\n";
    }

 };

 class Fish : public Animal{  //by default inheritence is a private access modifyable
    public: 

    int fins;

    void swim(){  // say base class inherited protected  but yu can use the base class properties  inside the class for accessing in main

        eat();
        cout<<"swims\n";
    }
 };

 int main(){

    Fish f1;
    f1.fins = 3;
    cout<< f1.fins<<endl;


    f1.swim();

    //till class is public we can use there in inherited class if inherited class is protected or private then we cant use the them in main even if they are publically defined in base class

    f1.eat();
    f1.breathe();

    return 0;
 }

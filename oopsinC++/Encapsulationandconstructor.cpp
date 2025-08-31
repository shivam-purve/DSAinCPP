#include<iostream>
#include<string>

using namespace std;

class Car {  // encapsulated everything like datas ,propeerties and member functions in to one Car class

    // default privately accessible

    string name;
    string color;

    public:

    // constructor --> no return type

    Car(string name,string color) { //remember class name and constructor should have same name //---mainly used for initialisation of properties
       cout<<"constructor is being called , object being created"<<endl;

       this->name = name;
       this->color = color;

    }

    // mmber functions //

    void start(){
        cout<<"car has started.\n";
    }

    void stop() {
        cout<<"car has stopped.\n";
    }

    //getter

    string getCarName(){
        return name;
        
    }

    string getCarColor(){
        return color;
    }


};

int main(){

    // creating object according to own defined constructor in class as argument
    Car c1("maruti 800","white"); //defining one object of class car
   cout<<"car name = "<<c1.getCarName()<<endl;
   cout<<"car color = "<< c1.getCarColor()<<endl;

}
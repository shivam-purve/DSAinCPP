#include<iostream>
#include<string>
using namespace std;

//abstarct class

class Shape {
    public:

    virtual void draw() = 0; //abstract function or pure virtual function
};

class Circle:public Shape{
    public:
    void draw(){
        cout<<"drawing a circle..\n";
    }
};

class Square:public Shape{
    public:
    void draw(){
        cout<<"drawing a Square..\n";
    }
};

int main(){

    Circle cir1;
    cir1.draw();
    Square squ1;
    squ1.draw();

    return 0;
}
#include<iostream>
#include<string>
using namespace std;


class Complex {
    int real;
    int imag;

    public:

    Complex(int r,int c){
        real = r;
        imag = c;
    }

    void show(){
        cout<< real<<" + "<<imag<<"i"<<"\n";
    }

    // operator overlaoding
    Complex operator + (Complex &c2){
        int resReal = this->real + c2.real;
        int resImg = this->imag + c2.imag;
        Complex c3(resReal,resImg);
        return c3;


        // cout<<"res = ";
        // c3.show();
    }

    Complex operator - (Complex &c2){
        int resReal = this->real - c2.real;
        int resImg = this->imag - c2.imag;
        Complex c3(resReal,resImg);
        return c3;


        // cout<<"res = ";
        // c3.show();
    }



};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);

    c1.show();
    c2.show();

    //operator overloading

    Complex c3 = c1 + c2;
    cout<<"res = ";
    c3.show();

    Complex c4 = c1 - c2;
    cout<<"res = ";
    c4.show();

    return 0;
}
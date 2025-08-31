#include<iostream>
#include<string>
using namespace std;

class Complex {
    public:
    int real_part;
    int img_part;
    Complex(int real_part,int img_part){
        this->real_part = real_part;
        this->img_part = img_part;
    }

    void showComplexNum(){
        cout<<"complex num = "<<real_part<<" + "<<img_part<<"i"<<endl;

    }

    Complex operator -(Complex &c2){
    int res_real = this->real_part - c2.real_part;
    int res_img = this->img_part - c2.img_part;
    //constructor calling
    Complex c3(res_real,res_img);
    return c3;

}
};
//operator overloading



int main(){

    Complex c1(5,6);
    Complex c2(2,3);
    cout<<"c1 = ";
    c1.showComplexNum();
    cout<<endl;
    cout<<"c2 = ";
    c2.showComplexNum();
    Complex c3 = c1 - c2;

    cout<<"\ndifference of c1 and c2 is: ";

    c3.showComplexNum();
    return 0;

}
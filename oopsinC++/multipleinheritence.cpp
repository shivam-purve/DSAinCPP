#include<iostream>
#include<string>

using namespace std;

class Teacher {

    public:
    string subject;
    int salary;

};

class Student {
    public:

    string rollNo;
    float cgpa;

};

class TA : public Teacher, public Student {
    public:

    string name;
};

int main(){


    TA t1;

    t1.name = "shivam raaz";
    t1.cgpa = 9.17;
    t1.subject = "C++";

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.cgpa<<endl;

    return 0;
}
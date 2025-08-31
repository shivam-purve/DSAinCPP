#include<iostream>
#include<string>
using namespace std;
# define ll long long

class BankAccount {
    private:
    ll accountNumber; //camelcase
     float balance = 0;

    public:

    //constructor for persons account number

    BankAccount(ll accountNumber){
        this->accountNumber = accountNumber;
    }
    void Deposit(float deposit){
        balance = balance + deposit;

    }
     void Withdraw(float withdraw){
        if(withdraw<=balance){
            balance = balance - withdraw;
        }
        else{
            cout<<"no suffiecient balance for this withdrawl.\n";
        }

    }
    //getter

    void getBalance(){
        cout<<"net balance is: "<<balance<<endl;
    }


};

int main(){
    BankAccount holder1(640340456); //constructor call while object creation with account number as argument
    holder1.Deposit(36500.45);
    holder1.Withdraw(324.34);

    holder1.getBalance();

    return 0;
}
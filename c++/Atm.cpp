#include<iostream>
using namespace std;
class Atm{
    private:
        float balance;
    public:
        Atm(){balance = 10000.00;}
    void deposit(float amount){
        balance += amount;
        cout<<"the current balance is:"<<balance<<endl;
    }
    void withdraw(float amount){
        if(amount > balance){
            cout<<"Insufficient Balance"<< endl;
        }else{
            balance -= amount;
            cout<<"the current balance is:"<<balance<<endl;
        }
    }
    void checkbalance(){
        cout<<"the current balance is:"<<balance<<endl;
    }
};
int main(){
    Atm myatm;
    myatm.checkbalance();
    myatm.deposit(5000);
    myatm.withdraw(2000);
    myatm.withdraw(20000);
    
    return 0;
}

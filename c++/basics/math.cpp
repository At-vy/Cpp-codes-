#include<iostream>
using namespace std;
// finding hcf/gcd(greatest common divisor) of any number
int gcd(int a , int b){
    while(a>0 && b>0){
        if (a > b){
            a = a%b;
        }else{
            b = b%a;
        }
    }
    if(a== 0) return b;
    return a;
}

// LCM Of two numbers 
int Lcm(int a, int b){
    // a*b = lcm(a,b) * gcd(a,b)
    // int gcd = gcd(a, b);
    return (a*b)/gcd(a,b);
}
bool armstrongnum(int n){
    int copyN = n;
    int sumofcube = 0;
    while(n != 0){
        int digit = n%10;
        sumofcube += (digit*digit*digit);
        n /= 10;
    }
    return sumofcube == copyN;
// returning digits of each number
}
void digitsofnum(int n){
    while (n != 0)
    {
        int digit = n % 10;
        cout<< digit << endl;
        n = n/10;
    }
    
}
int main(){
    // int n = 3586;
    // digitsofnum(n);
    // int n = 153;
    // if(armstrongnum(n)){
    //     cout<<"is armstrong num";
    // }else{
    //     cout<<"is not armstrong num";
    // }
    // cout<< gcd(20,28)<< endl;
    cout<< Lcm(20,28);
    return 0;
}
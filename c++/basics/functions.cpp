#include<iostream>
using namespace std;
// function to determine the fabonacci series for the given number
int fabbucini(int n){
    int first = 0, second = 1,next;
    if (n<=0){
        cout<<"the number is invalid "<<endl;
        return -1;
    }
    cout<<"fabbucini serties is "<<endl;
    if(n>=1) cout<<first<<endl;
    if(n>=2) cout<<second<<endl;
    for (int i = 3; i <= n; i++)
    {
        next = first+second;
        cout<<next<<endl;
        first = second;
        second= next;
        
    }
    cout<<endl;
    return next;
}

int main(){
    int n;
    cout<<"enter the number to find the fabbucini series "<<endl;
    cin>>n;
    fabbucini(n);
    return 0;
}

    

    

// FUNCTION FOR CALCULATING IF THE NUMBER IS PRIME OR NOT
// bool isprime(int n){
//     for (int i = 2; i<=n-1; i++){
//         if(n%i==0){
//             return 0;
//             break;
//         }
//     }
    
//     return true;
// }
// int main(){
//     int n;
//     cout<<"enter the number to check if it is prime or not "<<endl;
//     cin>>n;
//     if (isprime(n) == 0){
//         cout<<"the number is not prime "<<endl;
//     }
//     else{
//         cout<<"the number is prime "<<endl;
//     }
//     return 0;
// }

// TO  calculate the BINOMIAL  COEFFICIENT (nCr) using functions 
// int factorial(int n ){
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;    
// }
// int nCr( int n , int r){
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_nmr = factorial(n-r);
//     return fact_n / (fact_r * fact_nmr); 
// }
    
// int main(){
//     int n=8,r=2;
//     cout<<"the binomial coefficient of n and r is  = "<<nCr(n,r)<<endl;
//     return 0;
// }


//  TO FIND THE SUM OF DIGITS OF NUMBER
// int sumofdigits(int num){
//     int digsum = 0;
//     while(num>0){
//         int lastdig  = num % 10;
//         num /= 10;
//         digsum += lastdig;
//     }
//     return digsum;
// }
// // to calculate factorial of n numbers 
// int factorial (int n){
//     int fact = 1;
//     for (int i = 1; i<=n; i++){
//         fact *= i ;
//     }
//     return fact ;
// }

// funnction for sum from one to n 
// int sum(int n){
//     int sum = 0;
//     for ( int i = 1; i <= n; i++)
//     {
//          sum += i;
//     }
    
//   return sum;
// } 



#include<iostream>
using namespace std;
int main(){
    // To print if the given number is prime or not 
    int n;
    bool isprime = true;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    if (isprime = true){
        cout<<"The Given number is prime\n"<<endl;
    }
    else{
        cout<<"The given number is Not prime\n"<<endl;
    }
    // While loops
    // printing a numbers from 1-10
    // int i=1;
    // while (i<=10)
    // {
    //     cout<< i<<" " ;
    //     i++;
    // }

    // while loop calculating the sum of all no from 1 to n numbers 
    // int i=1,n, sum = 0 ;
    // cout<<"enter the value of n: ";
    // cin>>n;
    // while (i<=n)
    // {
    //     if (i%2 !=0)
    //     {
    //         sum+=i;
    //     }
    //     i++;   
    // }
    // cout<<"the sum is "<<sum;
    
    // FOR LOOP PRINTING NUMBERS FROM 1 TO 10
    // int i;
    // for(i=1;i<=10;i++){
    //     cout<<i<<" ";
    // }

    // FINDING THE SUM OF N NUMBERS USING FOR LOOP
    // int n,sum=0;
    // cout<<"Enter the value of n:";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     sum += i;
    // }
    // cout<<"The total sum of n numbers is:"<<sum<<" "<<endl;

    // finding sun of All ODD numbers till the given number
    // int n,sum=0;
    // cout<<"enter the value of n:";
    // cin>> n ;
    // for(int i=1; i<=n ;i++){
    //     if (i%2 != 0)
    //     {
    //         sum+=i;
    //     }  
    // }
    // cout<<" the sum is "<<sum<<endl;
   
    // finding sun of All ODD numbers within the given numbers 
    // int n,sum=0;
    // cout<<"enter the value of n:";
    // cin>> n ;
    // for(int i=1; i<n ;i++){
    //     if (i%2 != 0)
    //     {
    //         sum+=i;
    //     }  
    // }
    // cout<<" the sum is "<<sum<<endl;

    
        
    }
        

    
    
    return 0;

} 


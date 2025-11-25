#include<iostream>
using namespace std;
// STUDYING BINARY NUMBER SYSTEM
// To find out if the given number is of power of 2 or not 
bool ispowof2(int n){
    return(n>0) && ((n & n-1) == 0);

}
int main(){
    int num;
    cout<<"enter the number "<<endl;
    cin>>num;
    if(ispowof2(num)){
        cout<<"The number is of power of 2"<<endl;
    }
    else{
        cout<<"The number is not of power of 2"<<endl;
    }
    return 0;
}
// BINARY NUMBER TO DECIMAL CONVERSION
// int  bintodec(int binum){
//     int rem,ans= 0,pow = 1;
//     while (binum>0)
//     {
//         rem  = binum%10;
//         ans += (rem*pow);
//         pow *= 2;
//         binum /= 2;
        
//     }
//     return ans;
// }
// int main(){
    
//     cout<<"the decimal number is "<<bintodec(101)<<endl;
//     return 0;

// }

// DECIMAL TO BINAR Y CONVERSION
// int dectobinary(int decnum ){
//     int ans = 0, pow = 1, rem;
//     while (decnum>0)
//     {
//         rem = decnum%2;
//         ans += (rem*pow);
//         pow *= 10;
//         decnum  /= 2;
//     }
//     cout<<"the binary number is "<<ans<<endl;
//     return ans;
// }


// int main(){ int decnum = 50;
//     dectobinary(decnum);
//     return 0;
// }

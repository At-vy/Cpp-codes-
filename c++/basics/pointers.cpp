#include<iostream>
using namespace std;
int main(){

    // array pointer
    int arr[] = {1,2,3,4};
    cout<<arr<<endl; // gives the memory address of 0th index as its an pointer
    cout<<*arr<<endl; //gives the value of the 0th index of the array

    // creation of pointer
    // int a = 10;
    // int* ptr = &a; // can store address of 'a'
    // cout<<ptr<<endl;
    // cout<<*(&ptr)<<endl; //derefrencing operator 


    // memory address
    // int a = 2;
    // cout<< &a <<endl; // the value is in hexadecimal
    return 0;
}
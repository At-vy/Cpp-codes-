#include<iostream>
#include<climits>
using namespace std;
// To Swap Max and Min value of an ARRAY
int maxval(int arr[],int size){
    int largest = INT_MIN;
    int maxin;
 for (int i = 0; i < size; i++)
 {
    
    if (arr[i]>largest)
    {
        largest = arr[i];
        maxin = i;
    }
}
return maxin;
}
    
    
 
int minval(int arr[],int size){
    int smallest = INT_MAX;
    int minin;
    for (int i = 0; i < size; i++)
 {
    if (arr[i]<smallest)
    {
        smallest = arr[i];
        minin = i;
    }
}
return minin;
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int) ;
    int smallest = minval(arr,size);
    int largest = maxval(arr,size);
    cout<<largest <<"and"<<smallest<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    swap(arr[largest], arr[smallest]);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
   return 0 ;
}

// Reversing An Array
// int main(){
//     int arr[] = {4,2,7,8,1,2,5};
//     int size= 7, start= 0 ,end = size - 1;
//     while(start < end){
//         swap(arr[start],arr[end]);
//         start++ , end--;
//     }
//     for (int i = 0; i < size; i++)
//     {
//       cout<< arr[i]<<" ";
//     }
//     cout<< endl;
// }
   
// To Find LARGEST  And SMALLEST of Tow Numbers And its INDEX Value Too
// int indexofarr(int arr[], int target , int size ){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i ;
//         }
//     }
//     return -1; //Trget not found
// }
// int main(){
// int smallest = INT_MAX;
// int largest = INT_MIN;
// int nums[] = {5,15,22,1,-15,24};
// int size = 6;
// for (int i = 0; i < size; i++)
// {
//   if (nums[i]<smallest)
//   {
//     smallest = nums[i];
//   }
//   if(nums[i>largest]){ 
//     largest = nums[i];
//   }
// }
// cout<<"Smallest:"<<smallest<<endl;  
// cout<<"Largest:"<<largest<<endl;  
// if (indexofarr(nums,smallest,size) != -1)
// {
//     cout<<"the index of smallest is "<< indexofarr(nums,smallest,size)<<endl;
// }
// else
// {
//     cout<<"The given value does'nt exists"<<endl;
// }

//  if(indexofarr(nums,largest,size)){
//     cout<<"the index of largest is "<< indexofarr(nums,largest,size);
// }
// else
// {
//     cout<<"The given value does'nt exists"<<endl;
// }
// cout<<endl;
// return 0;
// }

        
    



// BASIC of ARRAYS
    // int size = 5;
    // int marks[5];
    // for (int i = 0; i < size; i++)
    // {
    //     cin>> marks[i];
    // }
    
    // for(int i = 0; i< size ; i++){
    //     cout<< marks[i]<<endl;
    // }
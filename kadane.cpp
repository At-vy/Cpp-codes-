#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    // to calculate maximum subarray sum (KADANE'S ALGORITHM)
    int arr[] = {1,2,3,4,5} ;
    int n = sizeof(arr)/sizeof(int);
    int maxsum = INT_MIN;
    int cursum = 0;
    for (int  i = 0; i < n; i++)
    {
        cursum += arr[i];
        maxsum = max(cursum,maxsum);
        if (cursum<0)
        {
            cursum = 0;
        }
        
    }
    cout<<maxsum;
    return 0;
    
    
    

    // to calculate maximum subarray sum (BRUTE FORCE APPR)
    // int maxsum = INT_MIN;
    // int arr[] = {1,2,3,4,5};
    // int n =sizeof(arr)/sizeof(int);
    // for (int st = 0;st<n; st++)
    // {
    //     int currentsum = 0;
    //     for (int end = 0; end < n; end++)
    //     {
    //         currentsum += arr[end];
    //         maxsum = max(currentsum,maxsum);
    //     }
        
    // }
    // cout<< maxsum;
    // return 0 ;
    

    // to calculate the total subarrays ptesent in an array 
    // int arr[] = {1,2,3,4,5};
    // int size = sizeof(arr)/sizeof(int);
    // for (int start = 0; start < size; start++)
    // {
    //     for (int end = start; end < size; end++)
    //     {
    //         for (int i = start; i <= end; i++)
    //         {
    //             cout<<arr[i];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;
}
            
        
    
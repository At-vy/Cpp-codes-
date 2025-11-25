#include<iostream>
using namespace std;
void insertionsort(int arr[], int n){
    for (int  i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev  = i - 1;
        while (prev >=  0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev --; 
        }
        arr[prev + 1] = curr;
    }
    
}

void selectionsort(int arr[], int n){
    for (int  i = 0; i < n-1; i++)
    {   
        int smallestidx = i;
        for (int  j = i+1; j < n; j++)
        {
            if(arr[j] < arr[smallestidx]){
                smallestidx = j;
            }
        }
        swap(arr[i], arr[smallestidx]);
    }
    
}

void bubble(int arr[], int n){ // BUBBLE SORT
    for (int  i = 0; i < n - 1; i++){
        for (int  j = 0; j < n - i - 1; j++)
        {
          if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);
          }  
        }
    }
}
void print(int arr[] , int n){
    for (int  i = 0; i < n; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}    
    
int main(){
    int arr[] = {4,1,5,2,3};
    int n = sizeof(arr)/sizeof(int);
    // bubble(arr, n);
    // selectionsort(arr, n);
    insertionsort(arr, n);
    print(arr, n);
    return 0;
}


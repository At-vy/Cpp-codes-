#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool isvalid(vector<int>arr, int N, int M, int maxallowedtime){
int painters = 1 , time = 0;
for (int  i = 0; i < N; i++)
{
    if (arr[i] > maxallowedtime)
    {
        return false;
    }
    if(arr[i] + time <= maxallowedtime){
        time += arr[i];
    }
    else{
        painters ++;
        time = arr[i];
    }
}
return painters <= M ? true : false;
}

int mintimetopaint(vector<int>arr, int N, int M){
int sum = 0 , maxval = INT_MIN;
for (int i = 0; i < N; i++)
{
    sum += arr[i];
    maxval = max(arr[i],maxval);
}
int st = maxval , end = sum, ans = -1 ; 
while (st <= end )
{
    int mid = st + (end - st)/2;
    if(isvalid(arr,N,M,mid) ){
        ans = mid;
        end = mid - 1;
    }
    else{
        st = mid + 1;
    }
}
return ans;

}

int main(){
    vector<int> arr = {40,30,10,20}; // this array shows length of each partitions
    int N = 4, M = 2; // M is no of painters  and Nis no fo partitions 
    cout<< mintimetopaint(arr,N,M)<<endl;
    return 0;
}
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
bool isvalid(vector<int> &arr, int N, int C, int minallowedvalue){
int cows = 1, lastpos = arr[0];
for (int i = 1; i < N; i++)
{
    if(arr[i] - lastpos >= minallowedvalue){
        cows++;
        lastpos = arr[i];
    }
    if(cows == C){
        return true;
    }
}
return false;
} 

int getdistance(vector<int> &arr, int N, int C){
sort(arr.begin(), arr.end()); 
// st = 1, end = maxval - minval 
int st = 1, end = arr[N-1] - arr[0], ans = -1;
while (st <= end )
{
    int mid = st + (end - st)/2;
    if (isvalid(arr, N, C, mid)){ //right
        ans = mid;
        st = mid + 1;
    }else{ // left 
        end = mid - 1;
    }
}
return ans;
}

int main(){
int N = 5 , C = 3;
vector<int> arr = {1,2,6,4,9};
cout<<getdistance(arr,N,C) << endl;
return 0;
}
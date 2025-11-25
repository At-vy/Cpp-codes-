#include<iostream>
#include<vector>
using namespace std;
bool isvalid(vector<int> &nums , int n, int m, int maxallowedpage){
int stu = 1 , pages = 0;
for (int i = 0; i < n; i++)
{
    if(nums[i]  > maxallowedpage){
        return false;
    }
    if (pages + nums[i] <= maxallowedpage)
    {
        pages += nums[i];
    }
    else{
        stu++;
        pages = nums[i];
        if(stu > m){
            return false;
        }
    }
}
return  true;

}
int allocatebooks(vector<int> &nums , int n, int m){
    if (m > n) // for any edge case 
    {
        return -1;
    }
    
    int sum = 0; // calculating the max no of poassible pages 
    for (int  i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    int ans = -1;
    int st= 0, end = sum; // range of all possible outcomes
    while (st <= end )
    {
        int mid = st +(end - st)/2;
        if(isvalid(nums ,n,m,mid) ){
            ans = mid ;
            end = mid -1; // left search 
        } 
        else{
            st = mid + 1; // right search 
        }
    }
   return ans;  
}
int main(){
    vector<int> nums = {2,1,3,4};
    int n = 4, m = 2;
    cout<<allocatebooks(nums, n,m)<< endl;
    return 0;
}

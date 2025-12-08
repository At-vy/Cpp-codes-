#include<iostream>
#include<vector>
using namespace std;
// solving majority element problem using Moore' voting Appr
int main(){
    vector <int> nums  = {1,2,2,1,1};
    int freq = 0, ans = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if(freq == 0){
            ans == nums[i];
        }
        if (ans == nums[i])
        {
          freq++;  
        }
        else{
            freq--;
        }
       return ans; 
    }
    return ans;
    

}

// solving pairsum problem using two pointer appr
// vector<int>pairsum(vector<int>vec,int target){
// vector<int>ans;
// int n= vec.size();
// int i = 0, j = n-1;
// while (i<j)
// {
//     int pairsum = vec[i]+vec[j];
//     if (pairsum > target)
//     {
//         j--;
//     }
//     else if (pairsum<target)
//     {
//         i++;
//     }
//     else{
//         ans.push_back(i);
//         ans.push_back(j);
//         return ans;
//     }
   
// }

// } 
// int main(){
// vector<int> vec = {2,7,11,15};
//     int target = 26;
//     vector<int>ans = pairsum(vec,target);
//     cout<<ans[0]<<","<<ans[1]<<endl;
//     return 0;
// }


// solving pairsum problem by brute force appr
// vector<int>pairsum(vector<int> vec,int target){
// vector<int>ans;
// int n = vec.size();
// for(int i = 0;i<n;i++){
//     for (int j = i+1; j < n; j++)
//     {
//         if(vec[i]+vec[j] == target){
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
// }
// return ans;    

// }
// int main(){
//     vector<int> vec = {2,7,11,15};
//     int target = 9;
//     vector<int>ans = pairsum(vec,target);
//     cout<<ans[0]<<" "<<ans[1]<<endl;
//     return 0;
    
// }
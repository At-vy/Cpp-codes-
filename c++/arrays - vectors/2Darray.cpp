#include<iostream>
#include<utility>
#include<climits>
using namespace std;
// digonal sum of a matrix
int digonalsum(int mat[][4], int n){
    int sum = 0;
    for(int i = 0; i< n; i++){
        for(int j = 0;j < n; j++){
            if(i == j){
                sum += mat[i][j];
            }
            else if(j == n-1-i){
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

// max  sum of each row 
int maxrowsum(int mat[][4], int row, int column){
    int maxrowsum = INT_MIN;
    for (int  i = 0; i < row; i++){
        int rowsum = 0;
        for (int j = 0; j < column; j++)
        {
            rowsum += mat[i][j];
        }
        maxrowsum = max(maxrowsum,rowsum);   
    }
    return maxrowsum;
}

// linear search in a 2d array
pair<int,int> linearsearch(int mat[][3],int rows , int columns, int target){ // while defining a matrix you need to define the value of columns you can skip the rows 
    for (int  i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if(mat[i][j] == target) return {i,j};
        }
           
    }
    return {-1,-1};
}
int main(){
    int Mat[4][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int rows = 4;
    int columns = 4;
    // cout<<maxrowsum(Mat,rows,columns);
    cout<<"the digonal sum of mat:"<<digonalsum(Mat,4);
    
    // pair<int,int> result = linearsearch(Mat,rows,columns,8);
    // cout<<"("<<result.first << result.second<<")";
    
    // for taking input in a matrix
    // for (int  i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         cin>>Mat[i][j];
    //     }
    //     cout<<endl;   
    // }
        
    // for giving output of a matrix
    // for (int  i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         cout<<Mat[i][j]<<" ";
    //     }
        
    //     cout<<endl;   
    // }
    return 0 ;
}
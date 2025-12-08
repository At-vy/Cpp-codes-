#include<iostream>
using namespace std;

int main(){
    
    // Butterfly pattern
    int n=4;
    for (int i = 0; i < n; i++)
    {
       //top left
       for (int j = 0; j < i+1; j++)
       {
        cout<<"*";
       }
      // middle spaces
      for(int j=0;j<2*(n-i-1);j++){
        cout<<" ";
      }
        // top right
        for (int j = 0; j < i+1; j++)
        {
           cout<<"*";
        }
        
       cout<<endl;
       
    }
    // botton

    for(int i=n-1;i>=0;i--){
        // left
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        // middle spaces
        for (int j = 0; j < 2*(n-i-1); j++)
        {
            cout<<" ";
        }
        // right
        for (int j = 0; j < i+1; j++)
        {
           cout<<"*";
        }
        cout<<endl;    
    }
        
    return 0;
    
    
    
    // Hollow diamond pattern 
    // int n=4;
    // // top
    // for (int i = 0; i < n; i++)
    // {
    //     // spaces
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if (i != 0 )
    //     {
    //         // spaces
    //         for(int j = 0; j < 2*i-1; j++){
    //             cout<<" ";
    //         }
    
    //         cout<<"*";
    //     }
    //    cout<<endl; 
        
    // }
    // // bottom 
    // for(int i=0;i<n-1;i++){
    //     // spaces 
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout<<" ";
    //     }
        
    //     cout<<"*";
    //     if (i !=n-2)
    //     {
    //         // spaces
    //         for (int j = 0; j < 2*(n-i)-5; j++)
    //         {
    //             cout<<" ";
    //         }
            
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // printing square pattern
    // int n=3,num=1;
    // char ch='A';
    // for (int i = 0; i < n; i++)
    // {
    //         for (int j = 0; j < n; j++)
    //         {
    //                 cout<<ch<<" ";
    //                 ch++;
    //             }
    //             cout<<endl;
    //         }

    // Triangle Pattern
    // note this one had the wrong logic concluding to wrong output
    // char ch='A';
    // int n=4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (char ch = i+1; ch > 0; ch--)
    //     {
    //         cout<<ch<<" ";
            
    //     }
    //     cout<<endl;
    // }

    // inverted triangle pattern
    // 
    
    // // Pyramid Pattern 
    // int n=4;
    // for(int i=0; i<n;i++){
    //     // spaces
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout<<" ";
    //     }
    //     // 1st triangle 
    //     for (int j = 1; j <= i+1; j++)
    //     {
    //        cout<< j;
    //     }
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout<< j;
    //     }
        
    //     cout<<endl;
    // }

    return 0;
   }
        
      
       
    
    
    


        
    

    
    
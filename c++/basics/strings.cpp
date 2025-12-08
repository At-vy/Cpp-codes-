#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;
bool ispalindromme(string &str){
    int st = 0, end = str.length() - 1;
    while (st <= end )
    {
        if(str[st] == str[end]){
            st++;
            end--;
        }else{
            return false;
        }
    }
    return true;
}
int main(){
    string str = "madam";
    ispalindromme(str);
            end++;
        }else{
            return false;
        }
    }
    
}

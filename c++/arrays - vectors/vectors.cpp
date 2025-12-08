#include <iostream>  // For std::cout
#include <vector>    // For std::vector

using namespace std;

int main() {
    vector<int> vec ;
    cout<<"size before push back = "<<vec.size()<<endl;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout<<"size after push back = "<<vec.size()<<endl;
    vec.pop_back();
    cout<<"size after pop back = "<<vec.size()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.at(1);
    
    

    return 0;
}
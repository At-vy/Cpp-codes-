#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Book{
    public:
        int bookID;
        string title;
        string author;
        bool isIssued;
        Book(int id, string t, string a){
            bookID = id;
            title = t;
            author = a;
            isIssued = false;
        }
        void displaydetails(){
            cout<<"ID:"<<bookID<<endl;
            cout<<"Title:"<<title<<endl;
            cout<<"Author:"<<author<<endl;
            cout<<"status:"<< isIssued<<endl;
        }
        void issuebook(){
            isIssued = true;
        }
        void returnbook(){
            isIssued = false;
        }
};
class Library{
    private: // encapsulation
        vector<Book>books;
    public:
        void addbook(Book b){
            books.push_back(b);
        }
        void displaybooks(){
            for(int i = 0; i < books.size(); i++)
            {
                books[i].displaydetails();
            }
        }
        void searchbook(string t){
            bool found = false;
            for(int i = 0; i < books.size(); i++){
                if (books[i].title == t)
                {
                    books[i].displaydetails();
                    found = true;
                }
            }
            if(!found){
                cout<<"Book not found"<<endl;
            }
        }    
        void issuebook(int id){
            for(int i = 0; i < books.size(); i++){
                if(books[i].bookID == id && !books[i].isIssued){
                    books[i].issuebook();
                    cout<<"Book issued succesfully"<<endl;
                    return;
                }
            }
            cout<<"Book not available for issue"<<endl;
        }  
        void returnbook(int id){
            for(int i = 0; i< books.size(); i++){
                if(books[i].bookID == id && books[i].isIssued){
                    books[i].returnbook();
                    cout<<"Book returned successfully"<<endl;
                    return;
                }
            }
            cout<<"invalid return attempt"<<endl;
        }  
};
int main(){
    Library lib;
    lib.addbook(Book(1,"C++ Programming","Atharva"));
    lib.addbook(Book(2,"Data Structures","piyush"));
    lib.displaybooks();
    lib.searchbook("C++ Programming");
    lib.issuebook(1);
    lib.displaybooks();
    return 0;
}    
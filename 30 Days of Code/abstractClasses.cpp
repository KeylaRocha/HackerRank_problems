#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

// Write your MyBook class here
class MyBook{
    public:
    MyBook(string title, string author, int price){
        this->title = title;
        this->author = author;
        this->price = price;
    }
    virtual void display(){
        cout << "Title: " << this->title << endl;
        cout << "Author: " << this->author << endl;
        cout << "Price: " << this->price << endl;
    }
    private:
    string title, author;
    int price;
};
    
    
// End class
int main() {
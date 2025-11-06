//creating class and object through c++
#include <iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
    int year;
    Book(string title,string author,int year){
        this->title=title ;
        this->author=author;
        this->year=year;

    } 
    void displayInfo()
    {
        cout<<"TITLE : "<<title<<endl;
        cout<<"AUTHOR : "<<author<<endl;
        cout<<"Year : "<<year<<endl;
    }
};
int main(){
    Book book1("Matida", "Roald Dahl", 1988);
    Book book2("The Giving Tree", "Shel Silverstein", 1964);

    book1.displayInfo();
    cout<<"*******"<<endl;
    book2.displayInfo();
    return 0;
}
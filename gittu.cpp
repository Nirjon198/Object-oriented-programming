//creating class and object through c++
#include <iostream>
using namespace std;
class Book{  //created a class
    public: 
    string title;
    string author;
    int year;
    Book(string title,string author,int year){ //constructor
        this->title=title ;
        this->author=author;
        this->year=year;

    } 
    void displayInfo() //function
    {
        cout<<"TITLE : "<<title<<endl;
        cout<<"AUTHOR : "<<author<<endl;
        cout<<"Year : "<<year<<endl;
    }
};
int main(){ //main function
    Book book1("Matida", "Roald Dahl", 1988); //declared object and initialised the constructor
    Book book2("The Giving Tree", "Shel Silverstein", 1964);

    book1.displayInfo();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    book2.displayInfo();
    return 0;
}
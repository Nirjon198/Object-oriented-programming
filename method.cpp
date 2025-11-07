// Methods are functions that belongs to the class.
// There are two ways to define functions that belongs to a class:
// 1.Inside class definition
// 2.Outside class definition
#include <iostream>
using namespace std;
class Student{
    public:
    void imethod(){
        cout<<"student of EWU"<<endl;
    }   //method defined inside the class

    void omethod();
};
void Student::omethod(){
    cout<<"Computer science and engineering"<<endl;
} //method definition outside the class

int main(){
    Student std; //create an objcet for Student class
    std.imethod();//call the method
    std.omethod();
    return 0;
}
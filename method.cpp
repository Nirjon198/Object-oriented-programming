// Methods are functions that belongs to the class.
// There are two ways to define functions that belongs to a class:
// 1.Inside class definition
// 2.Outside class definition
#include <iostream>
using namespace std;
class Student{
    public:
     
    void imethod(){
        cout<<"students Details"<<endl;
    }   //method defined inside the class
    string name(string n1){
        return n1;
    }
    void omethod();
    int id(int stdID);
};
// method definition outside the class
// method_returntype Class_name::mathod_name(returntype parameter){return parameter };
void Student::omethod(){
    cout<<"DEPARTMENT: Computer science and engineering"<<endl;
} 
int Student::id(int stdID){
    return stdID;
}
int main(){
    Student std; //create an objcet for Student class
    std.imethod();//call the method
    cout<<std.name("MD MEHEDI HASAN NIRJON")<<endl;
    std.omethod();
    cout<<"STUDENT ID : "<<std.id(113)<<endl; //display method parameter details cout<<object_name.method_name(parameter value);
    return 0;
}
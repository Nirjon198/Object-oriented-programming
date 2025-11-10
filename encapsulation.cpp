// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
// If you want others to read or modify the value of a private member, you can provide public get and set methods.
// #include <iostream>
// using namespace std;
// class Employee{
//     private:
//         int salary;
// };
// int main(){
//     Employee myObj;
//     myObj.salary=50; //error
//     return 0;
// }

// so how to get access to it?
#include <iostream>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    void setSalary(int s){
            salary=s;
    }
    int getSalary(){
        return salary;
    }
};
int main(){
    Employee myObj;
    myObj.setSalary(50000);
    cout<<myObj.getSalary()<<endl;
    return 0;
}
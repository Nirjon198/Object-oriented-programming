#include <iostream>
using namespace std;
class Employee{
    protected:
    int salary;
};
class HR:public Employee{
    public:
    int bonus;
    void setSalary(int s){
        salary=s;
    }
    int getSalary(){
        return salary;
    }
};
int main(){
    HR myObj;
    myObj.setSalary(10000);
    myObj.bonus=1500;
    cout<<myObj.bonus<<endl;
    cout<<myObj.getSalary()<<endl;
    cout<<"Total : "<<myObj.bonus+myObj.getSalary();
    return 0;
}
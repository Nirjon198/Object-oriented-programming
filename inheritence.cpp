// Inheritance allows one class to reuse attributes and methods from another class.
#include <iostream>
using namespace std;

class Vehicle{
    public:
    string brand ="BMW";
    void hond(){
        cout<<"peep peep \n";
    }
};
class Car:public Vehicle{
    public:
    string model="X5";
};
int main(){
    Car obj;
    obj.hond();
    cout<<obj.brand+" "+obj.model;
    return 0;
}
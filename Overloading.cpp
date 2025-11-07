// In C++, you can have more than one constructor in the same class.This is called constructor overloading.
// condition:Each constructor must have a different number or type of parameters, so the compiler knows which one to use when you create an object.

#include <iostream>
 using namespace std;
class Car{
    public:
    string brand;
    string model;
        Car(){  //constructor with zero parameter
            brand="Unknown";
            model="Unknown";

        }
        Car(string b,string m){  //constructor with zero parameter
            brand=b;
            model=m;

        }
};
int main(){
    Car car1;
    Car car2("BMW","X5");
    cout<<car1.model<<" "<<car1.brand<<endl;
    cout<<car2.model<<" "<<car2.brand;
    return 0;
}
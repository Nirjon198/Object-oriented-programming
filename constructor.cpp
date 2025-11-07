// A constructor is a special method that is automatically called when an object of a class is created.
// Constructor Rules
// 1. The constructor has the same name as the class.
// 2.It has no return type(not even void)
// 3.It is usually declared public
// 4.It is automatically called when an object is created.
// আপনি যদি খুব সংক্ষেপে উত্তর চান, তবে উত্তরটি হলো: C++ এ কনস্ট্রাকটর ব্যবহার করা হয় একটি অবজেক্ট (Object) তৈরি হওয়ার সাথে সাথেই তাকে সঠিকভাবে ইনিশিয়ালাইজ (Initialize) করার জন্য, অর্থাৎ তার সদস্য ভেরিয়েবলগুলোকে (member variables) একটি নির্দিষ্ট প্রাথমিক মান (initial value) দেওয়ার জন্য।
#include <iostream>
using namespace std;

class Constructor{
public: //access specifier

 Constructor(){
    cout<<"HELLO WORLD!THIS IS A CONSTRUCTOR"<<endl;
 }
};
class Car{
    public:
    string brand;
    string model;
    int year;
        Car(string x,string y,int z){   //constructor with parameter
            brand=x;
            model=y;
            year=z;

        }
};
//constructor defined outside the class 
class Bike{
public:
    string mileage;
    string displacement;
    int cylinder;
    int fuel_capacity;

    Bike(string m,string d,int c,int f);
};
Bike::Bike(string m, string d, int c, int f)
{
    mileage = m;
    displacement = d;
    cylinder = c;
    fuel_capacity = f;
}

int main(){
    Constructor myObj; //Create an object for the class.this will call the constructor
    cout<<endl<<endl<<endl;
    Car myObj1("BMW","X5",1999);
    cout<<myObj1.brand<<endl<<myObj1.model<<endl<<myObj1.year; //calling a constructor with parameter
    cout<<endl<<endl<<endl;
    Bike myObj2("45 kmpl", "155 cc",1,11);
    cout << "Mileage(Overall): " << myObj2.mileage<< endl;
    cout<<"Displacement : "<<myObj2.displacement<<endl;
    cout<<"No.of cylinder"<<myObj2.cylinder<<endl;
    cout<<"Fuel Capacity : "<<myObj2.fuel_capacity<<endl;
    return 0;
}
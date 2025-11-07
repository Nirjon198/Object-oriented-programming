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
int main(){
    Constructor myObj; //Create an object for the class.this will call the constructor
return 0;

}
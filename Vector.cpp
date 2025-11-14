#include<iostream>
#include <vector> // Include the vector library
using namespace std;
// int main(){
//     vector<int>vec;
//     vector<string>cars;
//     // vector<type> vectorName
//     cars={"volvo","bmw","ford","mazda"};
//     vector<int>numbers={34,23,345,90};
//     // vector<string>cars={"volvo","bmw","ford","mazda"};
//     for(string car:cars) //for each loop for(type variable_name:arrayName/vectorName)
//     { 
//         cout<<car<<endl;
//     }
    
//     for(int num:numbers){
//         cout<<num<<","<<endl;
//     }
//     //checking size of the vector
//     cout<<vec.size()<<endl; //output 0
//     cout<< cars.size()<<endl;
//     cout<< numbers.size()<<endl;

//     return 0;
// }

//size and capacity
// int main(){
    // The biggest difference between a vector and an array is that vectors can grow dynamically. That means you can add or remove elements from the vector.

    // vector<string> members={"Nirjon","Shawon","Rifat","Enamul","Rabbi","Enam"};
    // cout << members.size() << endl; // To find out how many elements a vector has, use the .size() function
    // cout << "capacity of members vector where the of the vector is" << members.size() <<" and capacity is "<< members.capacity()<<endl;
    // for(string circle : members){
    //     cout<<circle<<endl;
    // }
    // members.push_back("faiyaz"); // To add an element to the vector, you can use the .push_back() function, which will add an element at the end of the vector
    // members.push_back("Vuitta Rifat");
    // members.push_back("Minhaz");
    // members.push_back("Shihab");
    // members.push_back("Emon");
    // members.push_back("Hridoy");
    // members.push_back("Himel");
    // cout << members.size() << endl;
    // for (string circle : members)
    // {
    //     cout << circle + " ";
    // }
    // members.pop_back(); // To remove an element from the vector, you can use the .pop_back() function, which removes an element from the end of the vector
    // members.pop_back();
    // members.pop_back();
    // members.pop_back();
    // members.pop_back();
    // members.pop_back();
    // cout << members.size() << endl;
    // for(string circle: members){
    //     cout<<circle+" ";
    // }
    // vector<string>friends;
    // cout<<friends.size()<<endl;
    // cout<<friends.capacity()<<endl;
    // friends.push_back("nirjon");
    // cout<<friends.capacity()<<" "<<friends.size()<<endl;
    // friends.push_back("shawon");
    // cout<<"size:"<<friends.size()<<"\ncapacity: "<<friends.capacity()<<endl;
    // friends.push_back("rifat");
    // cout << "size:" << friends.size() << "\ncapacity: " << friends.capacity() << endl;
    // friends.push_back("minhaz");
    // cout << "size:" << friends.size() << "\ncapacity: " << friends.capacity() << endl;
    // friends.push_back("rabbi");
    // cout << "size:" << friends.size() << "\ncapacity: " << friends.capacity() << endl;
    // vector<int>vec(3,100); //vec(size of vactor,value of vector)
    // for(int val:vec){
    //     cout << val<<" ";
    // }
//     return 0; 
// }
//erase function
// int main(){
//     vector<int>num={3884,1881,4773,9090,9999,6594,9086,3454,36754,23466,867,123,456};
//     num.erase(num.begin() + 1, num.begin() + 3); // erase(start, end) works like this: it starts counting from the beginning at start, and removes elements up to end, but not including end.
//     //*** erase remove the size of vector but capacity remains same as before
//     for(int val : num){
//         cout<<val<<endl;
       
//     }
//     return 0;
// }
//insert function
// int main(){
//     vector<int>nums={1,2,3,4,5,6,7,8};
//     for(int val:nums){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     nums.insert(nums.begin()+3,100); //this is how we insert a value to vector.the value enter to next right 4 
//     for (int val : nums)
//     {
//         cout << val << " ";
//     }
// }
//clear function &empty function
int main(){
    vector<int>nums={1,2,3,4,5,6,7,8};
    for (int val : nums)
    {
        cout << val << " ";
    }
    cout<<endl;
    cout<<"is our function empty?\nAns: "<<nums.empty()<<endl; //to check if my function got empty or not
    cout<<"size : "<<nums.size()<<endl;
    cout<<"capacity : "<<nums.capacity()<<endl;
    nums.clear(); //clear the value of vector
    cout << "is our function empty?\nAns: " << nums.empty()<<endl;
    cout<<"size : "<<nums.size()<<endl;
    cout<<"capacity : "<<nums.capacity()<<endl;
}
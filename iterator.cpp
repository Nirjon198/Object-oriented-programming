#include <iostream>
#include <vector>
using namespace std;
// int main(){
//     vector<int>num={1,2,3,4,5};
//     cout << *num.begin(); // Iterators are used to access and iterate through elements of data structures (vectors, sets, etc.), by "pointing" to them
//     return 0;
// }
// int main(){
    //create a vector
//     vector<string> cars = {"BMW", "VOLVO", "FORD", "MAZDA"}; // First we create a vector of strings to store the names of different car manufactures.
//     // crete a vector iterator call it
//     vector<string>::iterator it;
//     // loop through the vector will iterator
//     // Then we create a "vector iterator" called it, that we will use to loop through the vector.
//     for (it = cars.begin(); it != cars.end(); it++) // Next, we use a for loop to loop through the vector with the iterator. The iterator (it) points to the first element in the vector (cars.begin()) and the loop continues as long as it is not equal to cars.end().
//     {
//         cout << *it << endl; // The dereference operator (*it) accesses the element the iterator points to.
//     }
//     return 0;

// }
int main(){
    vector<int>vec={1,2,3,4,5};
    cout<<*vec.end()<<endl; //it will not point next element of 5 which will return garbage value
    cout<<*vec.begin()<<endl;
    cout<<*vec.rbegin()<<endl;
    cout<<*vec.rend(); //will return garbage value
    return 0;
}
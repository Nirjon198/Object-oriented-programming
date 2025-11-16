#include <iostream>
#include <vector>
using namespace std;
// int main(){
//     vector<int>num={1,2,3,4,5};
//     cout << *num.begin(); // Iterators are used to access and iterate through elements of data structures (vectors, sets, etc.), by "pointing" to them
//     return 0;
// }
int main(){
    //create a vector 
    vector<string>cars={"BMW","VOLVO","FORD","MAZDA"};
    //crete a vector iterator call it
    vector<string>::iterator it;
    //loop through the vector will iterator
    for(it=cars.begin();it!=cars.end();it++){
        cout<<*it<<endl;
    }
    return 0;

}
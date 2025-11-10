#include <iostream>
using namespace std;
class First{
    public:
    string x="\nbang bang";

};
class Second{
    public:
    void myfunction(){
        cout<<"\nphew phew";
    }
};
class Third:public First,public Second{

};
int main(){
    Third myObj;
    myObj.myfunction();
    cout<<myObj.x;
}

#include <iostream>
using namespace std;
class Anoarhossain{
    public:
    string grandpa="From anoarhossain class";
};
class KhairulBashar:public Anoarhossain{

};
class Nirjon:public KhairulBashar{

};
class Abdullah:public Nirjon{

};
class Muhammad:public Abdullah{

};
int main(){
    Muhammad myObj;
    cout << myObj.grandpa;
}
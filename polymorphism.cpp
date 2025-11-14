// Polymorphism means "many forms",nd it occurs when we have many classes that are related to each other by inheritance
//  imagine a base class Animal with a method called makeSound(). Derived classes of Animals could be Pigs, Cats, Dogs, Birds, etc. Every animal can "make a sound", but each one sounds different:

// Pig: wee wee
// Dog: bow wow
// Bird: tweet tweet
// This is polymorphism - the same action (making a sound) behaves differently for each animal
#include <iostream>
using namespace std;
class Animal{
    public:
    void animalSound(){
        cout<<"sound of animal";
    }
};
class Cat:public Animal{
    public:
    void animalSound(){
        cout<<"\nthe cat says :meow meow";
    }
};
class Dog:public Animal{
    public:
    void animalSound(){
        cout<<"\nthe dog says:kire chodu";
    }

};
int main(){
    Animal myAnimal;
    Dog myDog;
    Cat myCat;
    myAnimal.animalSound();
    myCat.animalSound();
    myDog.animalSound();
    return 0;
}
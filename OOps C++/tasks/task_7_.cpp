// Date : 30-April-202600

#include<iostream>
using namespace std ;
class Animal{
    public:
    virtual void sound() = 0 ;  // this is an abstract function : 
    void getInfo(){
        cout << "This is a abstract function\n";
    }
};
class Dog : public Animal {
    public:
    void sound(){
        cout << "Dog's Barking\n";
    }
};
class Cat : public Animal {
    public:
    void sound(){
        cout << "Cats Meows\n";
    }
};
int main(){
    Animal* ptr ;
    
   ptr = new Dog();
   ptr -> sound();
   ptr -> getInfo();
   cout << "\n";
   ptr = new Cat();
   ptr -> sound();
   ptr -> getInfo();

   return 0 ;

}
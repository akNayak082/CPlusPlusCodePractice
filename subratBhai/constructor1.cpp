#include<iostream>
class Base{
    public:
    int a;
    virtual void fun(){
        std::cout << "I am at Base  "<<this;
    }
};
class Derive:public Base{
    public:
    void fun(){
        std::cout << "I am at Derive   "<<this;
    }
};
int main(){
    Base *bptr=new Derive();
    Derive d;
    std::cout << sizeof(*bptr)<<"\n";
    std::cout << sizeof(d);
    //bptr->fun();
    return 0;
}
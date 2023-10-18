#include<iostream>

class Test{
    int a,b;
    public:
    Test(int a,int b):a(a),b(b)
    {
        //a=a;
        //b=b;
        std::cout<<"\nTest()\n";
    }
    ~Test(){
        std::cout<<"\n~Test()\n";
    }
    /*void Fun(int a, int b)
    {
        a=a;
        b=b;
    }*/
    void Display(){
        std::cout<<a<<" "<<b;
    }
};
int main(){
    Test obj1(70,80);
    //obj1.Fun(7,8);
    obj1.Display();
    return 0;
}
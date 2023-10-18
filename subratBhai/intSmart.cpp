#include<iostream>
using namespace std;
class SmartPointer{
    public:
    int *ptr;
    explicit SmartPointer(int *p):ptr(p){
        cout<<"\nConstructor called\n";
    }
    ~SmartPointer(){
        cout<<"\nDestructor called\n";
        delete ptr;
    }
    int& operator*(){
        return *ptr;
    }
};
int main(){
    SmartPointer sptr(new int()); 
    //int* rawPtr = new int(); // Create an int* with dynamic memory allocation
    //SmartPointer sptr(rawPtr); // Pass the int* to the SmartPointer constructor
    *sptr=200;
    cout<<*sptr;
    return 0;
}
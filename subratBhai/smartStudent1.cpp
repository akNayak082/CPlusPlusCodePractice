/*1. Create a class representing student with attribute lime name, age, and grade.
Use the smart pointer to manage the memory of student object.*/

#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    student(string n = NULL, int a = 0, char g = '\0')
    {
        name = n;
        age = a;
        grade = g;
        cout << "\nstudent()";
    }
    ~student()
    {
        cout << "\n~student()\n";
    }
    void Display()
    {
        cout << "\n"
             << name << " " << age << " " << grade;
    }

private:
    string name;
    int age;
    char grade;
};
template <typename T>
class SP
{
    T *sptr;

public:
    SP(T *ptr) : sptr(ptr)
    {
        cout << "\nSP()";
    }
    ~SP()
    {
        cout << "\n~SP()";
        delete sptr;
    }
    T &operator*()
    {
        return *sptr;
    }
    T *operator->()
    {
        return sptr;
    }
};
int main()
{
    SP<student> ptr(new student("Ram", 25, 'a'));
    ptr->Display();
    return 0;
}

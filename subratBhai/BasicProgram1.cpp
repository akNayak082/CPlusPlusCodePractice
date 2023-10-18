#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
template<typename T>
void printFunction(std::vector<T> obj){
    for_each(obj.begin(), obj.end(),[](T a){
        std::cout<<a<<"  ";
    });
}
int main(){
    std::vector<int> vObj{1,2,3,4};
    printFunction(vObj);
    std::cout<<'\n';
    std::vector<std::string> vStr{"Ashok", "Ankit", "Bijuli"};
    printFunction(vStr);
    return 0;
}
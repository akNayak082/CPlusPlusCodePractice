#include<iostream>
#include<vector>
//#include<typeinfo>
/*void fdetectType(auto val){
    
    decltype(val) b=val;
    std::cout<<"\n"<<typeid(b).name();
}*/
void fdetectType(int val){
    
    std::cout<<"\nint fun call  "<<val;
}
void fdetectType(double val){
    
    std::cout<<"\ndouble fun call  "<<val;
}
int main(){
    /*auto a=10.5;
    decltype(a) b=a;
    std::cout<<a<<"  "<<b<<"\n";
    //std::cout<<typeid(a).name()<<"  "<<typeid(b).name();
    fdetectType(a);
    fdetectType(5);
    fdetectType('A');*/
    int x = 20;
    //auto *p = &x;
    //std::cout<< *p;
    
    std::vector<int> ele = {14,58,26,47,23,3};
    
    for(std::vector<int>::iterator itr=ele.begin(); itr!=ele.end(); ++itr)
    {
            int i = *itr;
            std::cout<<i<<" ";
    }
    std::cout<<"\n";
    for(int i : ele){
        std::cout<<i<<" ";
    }
    


    return 0;
}
#include<iostream>
using namespace std;

long long int power(int n, int exp){
    long long int res = 1;
    for(;exp>=1;exp--){
        res = n*res;
    }
    return res;
}

int main(){
    using namespace std;
    int n, exp;
    cout<<"Enter the no and Exp :";
    cin>>n>>exp;
    long long int res=power(n,exp);
    cout<<res;
    return 0;
}
#include<iostream>
#include<vector>

void findout(std::vector<int> &vObj,int end){
    using namespace std;
    for(int i=1;i<end;i++){
        if(i%2 == 0){
            vObj.push_back(i);
        }
    }
}

int main(){
    using namespace std;
    vector<int> vObj;
    int range = 10;
    findout(vObj,range);
    cout<<"\nElements are :";
    for(auto ele:vObj){
        cout<<ele<<" ";
    }
    return 0;
}
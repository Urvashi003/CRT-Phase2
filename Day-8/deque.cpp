#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int> dq ;
    dq.push_back(4);
    dq.push_back(3);
    dq.push_front(0); // 0 4 3

    for(auto x: dq){
        cout<<x<<" ";
    }
    cout<<endl;

    auto it = dq.begin();
    it++;
    dq.insert(it,200); //insert at koi bhi pos

    for(auto x: dq){
        cout<<x<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    // unordered_set<int>s;
    // s.insert(10);
    // s.insert(20);
    // //cout<<s.size()<<endl;
    // s.erase(10);
    // //cout<<s.size()<<endl;
    // s.insert(20);
    // //cout<<s.size();
    // s.insert(30);
    // s.insert(40);

    // // for(auto x: s){
    // //     cout<<x<<" ";
    // // }

    // if(s.find(20) != s.end()){
    //     cout<<"found"<<endl;
    // }
    // else{
    //     cout<<"not found";
    // }

    vector<int> arr= {1,1,2,2,3,1,4};
    set<int>s;
    for(int i=0; i<arr.size();i++){
        s.insert(arr[i]);
    }
    cout<<s.size()<<endl;

}
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,string> mp;
    mp[10]="abc";
    mp.insert({20,"xyz"});
    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }

    if(mp.find(10) != mp.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}
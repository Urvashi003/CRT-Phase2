#include<iostream>
#include<queue>
using namespace std;

// int main(){
//     // priority_queue<int>pq; //max heap
//     // pq.push(10);
//     // pq.push(20);
//     // pq.push(30);
//     // cout<<pq.top()<<endl;
//     // pq.pop();
//     // cout<<pq.top()<<endl;


//     priority_queue<int, vector<int>, greater<int>> pq; //min heap
//     //tc
//     //1 element to push in array is o(logn);
//     //n ele ko -- o(nlogn);

// }

int main(){
    vector<int> arr ={100,1,2,300,5};
    int sum =10;
    priority_queue<int,vector<int> , greater<int>> pq(arr.begin(), arr.end());
    int cnt =0;
    while(!pq.empty()){
        if(pq.top()<=sum){
        sum = sum- pq.top();
        pq.pop();
        cnt++;
        }
        else{
            break;
        }

    }
    cout<<cnt<<endl;

}


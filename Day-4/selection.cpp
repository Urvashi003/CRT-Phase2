#include<bits\stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr){
    int n = arr.size();
    //chote element koaage lao
    //mini elem find karo then swap
        //4,3,2,1
        //idx=0 // j<idx
        //idx=j
        for(int i=0; i<n; i++){
            int idx=i;
            for(int j= i+1; j<n; j++){
                if(arr[j]<arr[idx]){
                    idx=j;
                }
            }
            swap(arr[i], arr[idx]);
        }
}

int main(){
    vector<int> arr= {4,3,1,2};
    int n = arr.size();
    selectionSort(arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
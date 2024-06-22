#include<bits\stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr){
    int n = arr.size();
    //no of passes
    for(int i=0; i<n-1; i++){
       //no of compare
       for(int j=0; j<n-i-1; j++){
        bool flag= true;
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]); //vaise 0(n2)
            flag= false;        
        }
         if(flag==true){
        break; //o(n)
       }
       }
      
    }
    
}

// void bubbleSort(vector<int> &arr){
//     int n = arr.size();
//     for(int i= n-1; i>=0; i--){
//         for(int j=0; j<=i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

int main(){
    vector<int> arr= {5,4,3,2,1};
    int n =arr.size();
    bubbleSort(arr);
    for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
    }
}
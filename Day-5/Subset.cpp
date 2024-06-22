#include<iostream>
#include<vector>
using namespace std;

int maxSubset(vector<int>&arr, int i, int n, int sum){
    //bc
    if(i==n){
        return sum;
    }
    //processing
    int pick= maxSubset(arr,i+1,n,sum+arr[i]);
    int notpick= maxSubset(arr,i+1,n,sum);
    int ans = max(pick,notpick);
    return ans;
}




int main(){
   vector<int> arr= {1,2,3};
   int n = arr.size();
   int sum=0; //initialize then use
   cout<< maxSubset(arr,0,n,sum)<<endl;
   
}



//subset sum pblm gfg
class Solution{   
public:

  bool solve(vector<int> &arr, int i, int n, int sum){
      //bc
      if(i==n) return false;
      if(sum==0) return true;
      //process
      int pick= solve(arr,i+1,n,sum-arr[i]);
      int notpick= solve(arr,i+1,n,sum);
      return pick or notpick;
  }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here
        int n = arr.size();
    return solve(arr,0,n,sum);
    }
};
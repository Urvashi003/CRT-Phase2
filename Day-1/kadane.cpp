//o(n^2)
//gfg
class Solution {
  public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n) {

        // Your code here
        long long ans = arr[0];
        for(int i=0; i<n; i++){
            long long sum = 0;
            for(int j=i; j<n; j++){
                sum = sum+ arr[j];
                ans = max(sum,ans);
            }
        }
        return ans;
    }
};

//o(n)
class Solution {
  public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n) {

        // Your code here
        long long ans = arr[0];
        long long curr =0;
        for(int i=0; i<n; i++){
            curr= curr+arr[i];
            ans= max(curr,ans);
            
            if(curr<0){
                curr=0;
            }
            
        }
        return ans;
    }
};
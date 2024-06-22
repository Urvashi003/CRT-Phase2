//leetcode
class Solution {
public:

    int firstOcc(vector<int>& nums, int target){
        int n = nums.size();
        int s=0;
        int e= n-1;
        int ans = -1;
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]==target){
              ans = mid;
              e= mid-1;

            }
            else if(nums[mid]>target){
                e= mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;

    }

    int lastOcc(vector<int>& nums, int target){
        int n = nums.size();
        int s=0;
        int e= n-1;
        int ans = -1;
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]==target){
              ans = mid;
             s= mid+1;

            }
            else if(nums[mid]>target){
                e= mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = firstOcc(nums,target);
        int b =lastOcc(nums,target);
        vector<int> ans ={a,b};
        return ans;
    }
};
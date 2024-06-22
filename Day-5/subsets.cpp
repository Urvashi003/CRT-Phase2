//leetcode 78

class Solution {
public:
    void solve(vector<int>& nums, int i, int n, vector<int>&temp, vector<vector<int>>&ans){
        //bc
        if(i==n){
            ans.push_back(temp);
            return;
        }
        //process
        solve(nums,i+1,n,temp,ans); //not pick
        temp.push_back(nums[i]);
        solve(nums,i+1,n,temp,ans); //pick
        temp.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        int n = nums.size();
        solve(nums,0,n,temp,ans);
        return ans;
    }
};
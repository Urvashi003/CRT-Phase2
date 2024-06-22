//leetcode 46

class Solution {
public:

void solve( int i, int n, vector<int> nums, vector<vector<int>>&ans){
    //bc
    if(i==n){
        ans.push_back(nums);
    }
    for(int j=i; j<n; j++){
        swap(nums[i], nums[j]);
        solve(i+1,n,nums,ans);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        solve(0,n,nums,ans);
        return ans;
    }
};
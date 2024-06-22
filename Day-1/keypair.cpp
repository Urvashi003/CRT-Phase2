//gfg
//o(n2)

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    for(int i=0;i<n; i++){
	        for(int j= i+1; j<n; j++){
	            if(arr[i]+arr[j]==x){
	                return true;
	            }
	        }
	    }
	    return false;
	}
};

//o(n)

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    //set 
	    unordered_set<int>s;
	    for(int i=0; i<n; i++){
	        if(s.find(x-arr[i]) != s.end()){
	            return true;
	        }
	        s.insert(arr[i]);
	    }
	    return false;
	}
};


//o(nlogn)
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    sort(arr,arr+n);
	    int left=0;
	    int right = n-1;
	    while(left<right){
	        int sum = arr[left]+ arr[right];
	        if(sum==x){
	            return true;
	        }
	        else if(sum>x){
	            right--;
	        }
	        else{
	            left++;
	        }
	    }
	    return false;
	}
};


//leetcode
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            int val = target- nums[i];
            if(mp.find(val) != mp.end()){
                return {mp[val],i};
            }
            mp[nums[i]]=i; // insertion
        }
        return {};
    }
};
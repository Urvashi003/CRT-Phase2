//leetcode
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto x: mp){
            if(x.second> nums.size()/2){
                return x.first;
            }
        }
        return -1;
    }
};

//moore voting - 0(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //moore voting algo
        int n = nums.size();
        int maj = nums[0];
        int cnt=1;
        for( int i=0; i<n ;i++){
            if(nums[i]==maj){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt==0){
                maj = nums[i];
                cnt=1;
            }
        }
        //check
        int c=0;
        for(int i=0; i<n; i++){
            if(nums[i]==maj){
                c++;
            }
            if(c>n/2){
                return maj;
            }
        }
        return -1;
    }
};

//n/3
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //map
        vector<int>ans;
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
           mp[nums[i]]++;
        }
        for(auto x: mp){
            if(x.second >n/3){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //map
        unordered_map<int,int> mp;
        int n = nums.size();
        vector<int>ans;
        int val = n/3;
        int cnt =0;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(auto x: mp){
            if(x.second > val){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};


class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) { 
        int n = arr.size(); 
        int e1 = INT_MAX, e2 = INT_MAX, c1 = 0, c2 = 0; 
        for(int i=0; i<n; i++){ 
            if(c1==0 and arr[i] != e2){ 
                e1 = arr[i]; 
                c1 = 1; 
            } 
            else if(c2==0 and arr[i] != e1){ 
                e2 = arr[i]; 
                c2 = 1; 
            } 
            else if(arr[i] == e1) c1++; 
            else if(arr[i] == e2) c2++; 
            else{ 
                c1--; 
                c2--; 
            } 
        } 
        c1=0; 
        c2 = 0; 
        for(int i=0; i<n; i++){ 
            if(arr[i] == e1) c1++; 
            if(arr[i] == e2) c2++; 
        } 
        vector<int>ans; 
        if(c1>n/3) ans.push_back(e1); 
        if(c2>n/3) ans.push_back(e2); 
        return ans; 
    } 
};
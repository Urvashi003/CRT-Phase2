class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) { 

        int n = arr.size(); 

        vector<int>ans; 

        if(k > n) return ans; 

        deque<int>dq; 

        for(int i=0; i<k; i++){ 

            while(dq.empty() == false and arr[i] >= arr[dq.back()]){ 

                dq.pop_back(); 

            } 

            dq.push_back(i); 

        } 

        ans.push_back(arr[dq.front()]); 

        for(int i=k; i<n; i++){ 

            if(dq.front() == i-k){ 

                dq.pop_front(); 

            } 

            while(dq.empty() == false and arr[i] >= arr[dq.back()]){ 

                dq.pop_back(); 

            } 

            dq.push_back(i); 

            ans.push_back(arr[dq.front()]); 

        } 

        return ans; 
    }
   
};
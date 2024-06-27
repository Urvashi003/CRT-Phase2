class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int n, int K){
        priority_queue<int, vector<int> , greater<int>>pq;
        vector<int>ans;
         for(int i=0; i<=K; i++){
            pq.push(arr[i]); 
         }
         for(int i=K+1; i<n; i++){
             ans.push_back(pq.top());
             pq.pop();
             pq.push(arr[i]);
         }
         while(!pq.empty()){
             ans.push_back(pq.top());
             pq.pop();
         }
         return ans;
    }
};
class Solution {
public:

vector<int> previousSmaller(vector<int>& arr){
    vector<int> ans;
    int n = arr.size();
    stack<int> st;
    for(int i=0; i<n; i++){
    while(!st.empty() and arr[st.top()]>=arr[i])
        st.pop();
        if(st.empty()) ans.push_back(-1);
        else ans.push_back(st.top());
       
    
     st.push(i);
    }
    return ans;
}
 
 vector<int>nextSmaller(vector<int> &arr){
    vector<int>ans;
    stack<int>st;
    int n = arr.size();
    for(int i=n-1; i>=0; i--){
       while(!st.empty() and arr[st.top()]>=arr[i])
       st.pop();
       if(st.empty()) ans.push_back(n); 
       else ans.push_back(st.top());
       st.push(i);
    
     
    }
    reverse(ans.begin(), ans.end());
    return ans;
    
 }

    int largestRectangleArea(vector<int>& arr) {
        vector<int> ps= previousSmaller(arr);
        vector<int> ns = nextSmaller(arr);
       int ans =0;
        
        for(int i=0; i<arr.size(); i++){
          int length = ns[i]-ps[i]-1;
          int area = length * arr[i];
          ans = max(ans,area);
        }
        return ans;

    }
};
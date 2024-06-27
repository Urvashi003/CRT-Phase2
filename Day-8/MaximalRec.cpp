class Solution {
public:
  vector<int> previousSmaller(vector<int>& arr){
     int n = arr.size();
     vector<int> ans;
     stack<int>st;
     for(int i=0; i<n; i++){
        while(!st.empty() and arr[i]<=arr[st.top()])
        st.pop();
        if(st.empty()) ans.push_back(-1);
        else ans.push_back(st.top());
        st.push(i);
     }
     return ans;
  }

  vector<int> nextSmaller(vector<int>&arr){
    int n = arr.size();
    vector<int>ans;
    stack<int>st;
    for(int i=n-1; i>=0; i--){
        while(!st.empty() and arr[i]<=arr[st.top()])
        st.pop();
        if(st.empty()) ans.push_back(n);
        else ans.push_back(st.top());
        st.push(i);
            }
            reverse(ans.begin(), ans.end());
            return ans;
  }

  int largestRectangleArea(vector<int> &arr){
    vector<int> ps = previousSmaller(arr);
    vector<int> ns= nextSmaller(arr);
    int ans=0;
    for(int i=0; i<arr.size(); i++){
        int len = ns[i]-ps[i]-1;
        int area = len* arr[i];
        ans = max(ans,area);
    }
    return ans;
  }
    int maximalRectangle(vector<vector<char>>& arr) {
        int n = arr.size();
        int m = arr[0].size(); //col
        vector<int> v(m,0);
        int ans =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]=='1'){
                    v[j]++;
                }
                else {
                    v[j]=0;
                }
            }
            int area = largestRectangleArea(v);
            ans = max(ans,area);
        }
        return ans;
    }
};
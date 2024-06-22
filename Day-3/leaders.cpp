//gfg
class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        vector<int> ans;
        
        for(int i=0; i<n ;i++){
            bool flag = true;
            for(int j= i+1; j<n; j++){
                
                if(arr[j]>arr[i]){
                    flag= false;
                    break;
                }
            }
           if(flag==true){
            ans.push_back(arr[i]);
        } 
        }
       return ans; 
    }
};


//o(n)
class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
       vector<int>ans;
       ans.push_back(arr[n-1]);
       int maxi = arr[n-1];
       for(int i= n-2; i>=0; i--){
           if(arr[i]>=maxi){
               ans.push_back(arr[i]);
               maxi = arr[i];
           }
       }
       reverse(ans.begin(), ans.end());
       return ans;
        
    }
};
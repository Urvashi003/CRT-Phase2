//Subarray with 0 sum
//gfg- o(n)
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum =0;
        unordered_set<int>s;
        
        for(int i=0; i<n; i++){
            sum = sum+arr[i];
            if(s.find(sum) != s.end()){
                return true;
            }
            if(sum==0) return true;
            s.insert(sum);
        }
        return false;
    }
};

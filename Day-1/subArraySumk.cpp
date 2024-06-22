//gfg
class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        //map
        
        unordered_map<int,int>mp;
        int cnt=0;
        int sum=0;
        
        mp[0]=1;
        
        for(int i=0; i<N; i++){
            sum = sum + Arr[i];
            if(mp.find(sum-k) != mp.end()){
                cnt = cnt+ mp[sum-k];
            }
            mp[sum]++;
        }
        return cnt;
    }
};
class Solution {
public:

   bool isPossible(int mid, vector<int>& piles, int h ){
    long long time =0;
    int n = piles.size();
    for(int i=0; i<n; i++){
        if(piles[i]%mid ==0){
            time = time + piles[i]/mid;
        }
        else{
            time = time+ piles[i]/mid +1;
        }

    }
    if(time<=h) return true;
    else return false;
   }
    int minEatingSpeed(vector<int>& piles, int h) {
        //if sol is possible
        //min eating bananas
        int n = piles.size();
        long long low =1;
        long high = piles[0];
        //max find
        for(int i=0; i<n; i++){
           if(piles[i]>high)
           high = piles[i];
        }
        // search space pe BS lagao
        long long ans = 0;
        while(low<=high){
          long long mid = (low+high)/2;
          if(isPossible(mid,piles,h)==true){
            ans = mid;
            high = mid-1;
          }
          else{
            low = mid+1;
          }
        }
        return ans;
    }
};
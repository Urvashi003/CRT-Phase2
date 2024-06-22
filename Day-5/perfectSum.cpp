class Solution{

	public:
	int solve(int arr[], int i, int n, int sum, int mySum){
	    //bc
	    if(i==n) {
	    if(sum==mySum) return 1;
	    else return 0;
	    }
	    
	    //process
	    int pick= solve(arr,i+1,n,sum,mySum+arr[i]);
	    int notpick= solve(arr,i+1,n, sum, mySum);
	    return pick+notpick;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        
        return solve(arr,0,n,sum,0);
	}
	  
};
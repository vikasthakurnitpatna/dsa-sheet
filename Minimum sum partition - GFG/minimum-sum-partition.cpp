//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
      int totalsum=0;
    int helper(int i,int sum,int arr[],int n,vector<vector<int>>&dp){
        
        if(i>=n) return abs(sum-(totalsum-sum));
        
        if(dp[i][sum]!=-1) return dp[i][sum];
        
        int include=helper(i+1,sum+arr[i],arr,n,dp);
        int exclude=helper(i+1,sum,arr,n,dp);
        
        return dp[i][sum]=min(include,exclude);
    }

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	
	  for(int i=0;i<n;i++){
	      totalsum+=arr[i];
	  }
	  vector<vector<int>>dp(n+1,vector<int>(totalsum+1,-1));
	  return helper(0,0,arr,n,dp);
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends
// #include<vector>

class Solution {
    int helper(int i,int j,int m ,int n, int &count,vector<vector<int>>&dp){
        if(i>=m || j>=n ) return 0;
        if(i==m-1 && j==n-1){
            
            return 1;
        }
        if(dp[i][j]!=0) return dp[i][j];
        
       return dp[i][j]=helper(i+1,j,m,n,count,dp)+ helper(i,j+1,m,n,count,dp);
    }
public:
    int uniquePaths(int m, int n) {
        int count=0;
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        return helper(0,0,m,n,count,dp);
     
    }
};
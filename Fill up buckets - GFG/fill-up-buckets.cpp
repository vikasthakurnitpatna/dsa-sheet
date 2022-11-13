//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#define mod 1000000007
class Solution{
public:
    int totalWays(int n, vector<int>capacity) {
        // code here
        sort(capacity.begin(),capacity.end());
        long ans=capacity[0];
        for(int i=1;i<n;i++){
            
            // if(capacity[i]-i < 0) continue;
            
            // else if(capacity[i]-i == 0) return 0;
            
            ans=(ans%mod*(capacity[i]-i)%mod)%mod;
            
        }
        return ans%mod;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>capacity(n);
		for(int i = 0; i < n; i++)
			cin >> capacity[i];
		Solution ob;
		int ans = ob.totalWays(n, capacity);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
# define mod 1000000007
class Solution {
	public:
		int NthTerm(int n){
		    // Code  here
		    long long int ans=2;
		    for(int i=2;i<=n;i++){
		        ans=((ans*i)%mod+1)%mod;
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
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
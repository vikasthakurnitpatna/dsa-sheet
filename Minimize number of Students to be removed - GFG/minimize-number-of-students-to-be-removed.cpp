//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int LIS(int height[], int n){
        
        vector<int> arr;
        int ans = 1, len = 1;
        arr.push_back(height[0]);
        
        for(int i=1; i<n; i++){
            
            if(arr.back() < height[i]){
                // cout<<arr.back()<<" ";
                arr.push_back(height[i]);
                len++;
                ans = max(ans, len);
            }
            else {
                // cout<<arr.back()<<" ";
                auto it = lower_bound(arr.begin(), arr.end(), height[i]);
                *it = height[i];
                // cout<<arr.back()<<" ";
            }
        }
        
        return ans;
    }
    int removeStudents(int H[], int N) {
        // code here
         int lis = LIS(H, N);
        return (N-lis);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends
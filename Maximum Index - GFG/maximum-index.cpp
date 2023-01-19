//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        // if(n==0||n==1) return 0;
        // int i=0,j=n-1,ans=INT_MIN;
        // while(j>i){
        //     if(arr[i]>arr[j]) j--;
        //     else{
        //         ans=max(ans,j-i);
        //         i++;
        //         j=n-1;
        //     }
        // }
        // return ans;
        vector<int>lmin(n,0);
        vector<int>rmax(n,0);
        lmin[0]=arr[0];
        rmax[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            lmin[i]=min(lmin[i-1],arr[i]);
        }
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(rmax[i+1],arr[i]);
        }
        int i=0,j=0,ans=INT_MIN;
        while(i<n && j<n){
            if(lmin[i]<=rmax[j]){
                ans=max(ans,j-i);
                j++;
            }
            else i++;
        }
        return ans;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
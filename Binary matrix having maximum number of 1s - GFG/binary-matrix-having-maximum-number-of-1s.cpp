//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        //code here
        int count=0;
        int r=mat.size();
        int c=mat[0].size();
        int row=0;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<mat[0].size();j++){
        //         if(mat[i][j]==1 && count<mat[0].size()-j){
        //             row=i;
        //             count=mat[0].size()-j;
        //         }
        //     }
        // }
        // return {row,count};
        int j=0;
        while(j<c){
            int i=0;
            while(i<r){
                if(mat[i][j]==1) return {i,c-j};
                i++;
            }
            j++;
        }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends
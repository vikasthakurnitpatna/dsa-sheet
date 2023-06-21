//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void helper(int i,vector<int>&ans,int sum,vector<int> arr, int n){
        if(i>=n){
            ans.push_back(sum);
            return;
        }
        helper(i+1,ans,sum,arr,n);
        helper(i+1,ans,sum+arr[i],arr,n);
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        int sum=0;
        vector<int>ans;
        helper(0,ans,sum,arr,N);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
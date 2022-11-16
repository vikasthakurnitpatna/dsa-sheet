//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    // int helper(string &ans){
    //     map<char,int>m;
    //     // cout<<"nas"<<endl;
    //     for(int i=0;i<ans.size();i++){
    //         m[ans[i]]++;
    //     }
    //     // if(m.size()==1) return 0;
    //     int maxi=INT_MIN,mini=INT_MAX;
        
    //     for(auto it:m){
    //         maxi=max(maxi,it.second);
    //         mini=min(mini,it.second);
    //     }
    //     // cout<<maxi-mini<<endl;
    //     return maxi-mini;
    // }
    
    // int getans(string &s){
        
    //     int result=0;
    //     int n=s.size();
        
    //     unordered_map<string,int>umap;
    //     for (int i = 0; i < n; i++){
    //       for (int len = 2; len <= n - i; len++){
    //         string ans = s.substr(i, len);
            
    //         if(umap.find(ans)==umap.end()) result+=helper(ans);
    //         umap[ans]++;
    //       }
    //     }
    //     return result;
    // }
    
  public:
  int findBeauty(vector<int> fre) {
        int mx=INT_MIN,mn=INT_MAX;
        for(int f : fre) {
            if(f==0) continue;
            mx = max(mx,f);
            mn = min(mn,f);
        }
        return mx-mn;
    }
    int beautySum(string s) {
        // Your code goes here
        int ans=0;
        for(int i=0;i<s.length();i++) {
            vector<int> fre(26,0);
            for(int j=i;j<s.length();j++) {
                fre[s[j]-'a']++;
                ans+=findBeauty(fre);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
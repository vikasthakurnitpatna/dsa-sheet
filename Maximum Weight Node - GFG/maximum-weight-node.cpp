//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      // code 
      unordered_map<int,int>umap;
      for(int i=0;i<N;i++){
          if(Edge[i]>=0){
              if(umap.find(Edge[i])!=umap.end()) umap[Edge[i]]+=i;
              else umap[Edge[i]]=i;
          }
      }
      int ans=-1;
      int res=0;
      for(auto temp:umap){
          if(temp.second>ans){
              res=temp.first;
              ans=temp.second;
            //   cout<<res<<" "<<ans<<endl;
          }
      }
      return res;
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends
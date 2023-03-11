//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        // code here
        unordered_map<int,int>umap;
        vector<int>freq(N,0);
        for(int i=N-1;i>=0;i--){
            if(umap.find(A[i])!=umap.end()){
                umap[A[i]]++;
                freq[i]+=umap[A[i]];
            }
            else{
                freq[i]++;
                umap[A[i]]++;
            }
        }
        // for( auto it:freq) cout<<it<<" ";
        vector<int>ans;
        for(int i=0;i<num;i++)
        {
            int cnt=count(freq.begin()+ Q[i][0],freq.begin()+Q[i][1]+1,Q[i][2]);
            ans.push_back(cnt);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends
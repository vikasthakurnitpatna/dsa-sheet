//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    string secondSmallest(int S, int D){
        // code here 
        vector<int>ans(D,0);
        // ans[0]=1;
        
        for(int i=D-1;i>0;i--){
            ans[i]=min(S-1,9);
            S-=ans[i];
        }
        // cout<<ans[0]<<ans[1]<<ans[2];
        if(S>9) return "-1";
        ans[0]=S;
        bool flag =false;
        for(int i=D-1;i>0;i--){
            if(ans[i]!=0 && ans[i-1]!=9){
                ans[i]-=1;
                ans[i-1]+=1;
                flag=true;
                break;
                
            }
        }
        if(!flag) return "-1";
        string res="";
        for(int i=0;i<D;i++){
            res+=to_string(ans[i]);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
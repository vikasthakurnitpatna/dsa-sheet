//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++


class Solution
{

public:
    int xmod11(string x)
    {
       // code here
       int ans=0;
       string temp="";
       for(long long  i=0;i<x.size();i++){
           temp+=x[i];
           long long  num=stoi(temp);
           if(num>=11){
               ans=num%11;
               temp=to_string(ans);
              
           }
       }
    return stoi(temp)%11;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
        int temp=A+B;
        A=min(A,B);
        B=temp-A;
        temp=C+D;
        C=min(C,D);
        D=temp-C;
        int move=0;
        while(!(A<=C && B<=D)){
            if(B<=D) A>>=1;
            else B>>=1;
            temp=A+B;
            A=min(A,B);
            B=temp-A;
            move++;
        }
        return move;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends
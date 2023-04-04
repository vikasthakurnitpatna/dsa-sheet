//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    string s=str;
     int index = 0, count = 0;
    if(s[index] == 'a')
    {
        while(index < s.length()-1){
            if(s[index]=='a' && s[index+1]=='b'){
                count++;
                index++;
            }
            index++;
        }
    }
    else
    {
        while(index < s.length()-1){
           if(s[index] == 'b' && s[index+1]=='a'){
                count++;
                index++;
            }
            index++;
        }
    }
   
    return count+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends
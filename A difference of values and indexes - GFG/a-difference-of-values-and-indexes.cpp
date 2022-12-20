//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        // Complete the function
         int case1_max1=INT_MIN,case1_max2=INT_MIN,case2_min=INT_MAX,case2_max=INT_MIN;

       for(int i=0;i<n;i++)

       {

           if(arr[i]-i>case1_max1) case1_max1=arr[i]-i;

           if(i-arr[i]>case1_max2) case1_max2=i-arr[i];

           if(arr[i]+i>case2_max)    case2_max =arr[i]+i;

           if(arr[i]+i<case2_min)    case2_min =arr[i]+i;

       }

       return max(case1_max1+case1_max2,case2_max-case2_min);
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends
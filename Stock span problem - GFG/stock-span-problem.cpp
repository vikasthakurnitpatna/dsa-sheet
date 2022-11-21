//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    // void helper(int price[], int n, int &count,int i){
    //     int j=i-1;
    //     while(j>=0){
    //         if(price[i]>price[j]){
    //             count++;
    //             j--;
    //         }
    //         else break;
    //     }
    // }
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
      vector<int>v;
    //   for(int i=0;i<n;i++){
    //       int count=1;
    //       helper(price,n,count,i);
    //       v.push_back(count);
    //   }
    //   return v;
         stack<pair<int,int>>s;
         for(int i=0;i<n;i++){
            if(s.empty()){
                s.push({price[i],1});
                v.push_back(1);
            }
            else if(s.top().first>price[i]){
                s.push({price[i],1});
                v.push_back(1);
            }
            else{
                int count=1;
                while(!s.empty() && s.top().first<=price[i]){
                    auto temp=s.top();
                    count+=temp.second;
                    s.pop();
                }
                s.push({price[i],count});
                v.push_back(count);
            }
         }
         return v;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends
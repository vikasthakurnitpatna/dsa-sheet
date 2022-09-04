class Solution {
int getnum(int n,int r){
        // if(n==0 || r==0 || n-r==0 ) return 1;
        if(r>n-r) r=n-r;
        long long int ans1=1;
        long long int ans2=1;
        while(r){
            ans1*=n;
            ans2*=r;
            n--;
            r--;
        }
        return ans1/ans2;
    }
    
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});
        for(int n=1;n<numRows;n++){
          vector<int>temp;
            temp.push_back(1);
        for(int r=1;r<n;r++){
            int num;
            // if(r==0||r==n || n==0) num=1;
         num=getnum(n,r);
            temp.push_back(num);
        }
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;
    }
};
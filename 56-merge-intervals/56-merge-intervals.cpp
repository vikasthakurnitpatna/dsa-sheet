class Solution {
    static bool comp(vector<int> a,vector<int>b){
        return a[1]<b[1];
    }
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        // for(auto temp:intervals){
        //     for(auto i:temp){
        //         cout<<" ";
        //     }
        // }
        int end=intervals[0][1];
        int start=intervals[0][0];
        for(int i=1;i<intervals.size();i++){
            
            if(end>=intervals[i][0]){
                end=max(end,intervals[i][1]);
                // start=intervals[i+1][0];

            }
            else{
                ans.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};
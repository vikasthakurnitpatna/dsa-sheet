class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return 1;
        int ans=0;
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]+1==nums[i]){
                count++;
            }
            else if(nums[i-1]==nums[i]) continue;
            else{
                ans=max(ans,count);
                count=1;
            }
        }
        ans=max(ans,count);
        return ans;
    }
};
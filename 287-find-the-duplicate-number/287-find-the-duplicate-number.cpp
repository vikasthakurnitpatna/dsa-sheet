class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int>umap;
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(int i=0;i<umap.size();i++){
            if(umap[nums[i]]>=2) ans=nums[i];
        }
        return ans;
    }
};
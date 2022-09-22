class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>umap;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            umap[nums[i]]++;
            if(umap[nums[i]]>n/3){
                umap[nums[i]]=INT_MIN;
                ans.push_back(nums[i]);
            }
            
        }
        return ans;
    }
};
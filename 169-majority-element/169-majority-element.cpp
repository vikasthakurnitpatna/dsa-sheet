class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            if(umap[nums[i]]==nums.size()/2){
                return nums[i];
            }
            else umap[nums[i]]++;
        }
         return -1;
    }
   
};
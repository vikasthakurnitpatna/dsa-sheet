class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++){
        //     int sum=target-nums[i];
        //     for(int j=i+1;j<nums.size();j++){
        //         if(sum==nums[j]){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             break;
        //         }
        //     }
        // }
        // return ans;
        vector<int> result;
        unordered_map <int,int> mapsum;
        // for(int i=0;i<nums.size();i++){
        //     mapsum[nums[i]]=i;
        // }
        for(int j=0;j<nums.size();j++){
            int val=nums[j];
            if(mapsum.find(target-val)!=mapsum.end() && mapsum[target-val]!=j){
                result.push_back(j);
                result.push_back(mapsum[target-val]);
                break;
            }
            else mapsum[nums[j]]=j;
        }
        return result;
    }
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
       int l=0,h=n*m-1;
        while(h>=l){
            int mid=l+(h-l)/2;
            if(matrix[mid/m][mid%m]==target) return true;
            else if(matrix[mid/m][mid%m] > target) h=mid-1;
            else l=mid+1;
        }
        return false;
    }
};
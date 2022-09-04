class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int temp[n+1][m+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                temp[i][j]=matrix[i][j];  
                }
            }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(temp[i][j]==0 && matrix[i][j]==0){
                    for(int col=0;col<m;col++){
                      matrix[i][col]=0;
                    }
                      for(int row=0;row<n;row++){
                      matrix[row][j]=0;
                    }
                }  
                }
            }
    }
};
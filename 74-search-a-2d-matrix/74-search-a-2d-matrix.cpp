class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int col=matrix[0].size();
        int r=0;
        int c=col-1;
        while(r<rows && c>=0){
            if(matrix[r][c]==target){
                return true;
            }
            if(target>matrix[r][c]){
                r=r+1;
            }
            else{
                c=c-1;
            }
        }
        return false;
        
    }
};
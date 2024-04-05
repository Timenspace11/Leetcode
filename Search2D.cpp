class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //simple binary search use krnaa hai aur kuch nahi ..
          int y = matrix[0].size();
          for(int i=0;i<matrix.size();i++){
            if(target >= matrix[i][0]  && target<= matrix[i][y-1]){
                for(int j=0;j<y;j++){
                    if(matrix[i][j]==target) return true;
                }
            }
          }

          return false;
    }
};
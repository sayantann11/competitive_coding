class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      for(int m = matrix.size(),int  n = matrix[0].size(),x=0,y=n-1;x<m&&y>0)
      {
        if(matrix[x][y]==target)
          return true;
        else if(matrix[x][y]>target)y--;
        else
          x++;
      }
      return false;
    }
};

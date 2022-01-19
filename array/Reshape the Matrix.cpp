class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
         if(mat.size()*mat[0].size() != r*c)
			return mat;
	
	vector<vector<int>>arr(r,vector(c,0));
     
	 for(int i=0;i<r*c;i++)
        arr[i/c][i%c]=mat[i/mat[0].size()][i%mat[0].size()];
      
	  return arr;
        
    }
};

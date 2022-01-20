class Solution {
private:
	bool solve(vector<vector<char>>& board, vector<vector<bool>>& visited){
		for(int i=0;i<board.size();i++){
        	for(int j=0;j<board[0].size();j++){
        		if(board[i][j] != '.' and visited[i][j] == false){
        			visited[i][j] = true;
        			if(canPlace(board, i, j, board[i][j])){
        				if(solve(board, visited))
        					return true;
        				else
        					return false;
        			}else{
        				return false;
        			}
        		}
        	}
        }
        return true; //Base case we have reached the solution we return
	}
	bool canPlace(vector<vector<char>>& board, int row, int col, char c){
        //We have ensure that we are not checking the same character with itself.
		for(int i=0;i<9;i++){
			if(i != col){
				if(board[row][i] == c)
					return false;
			}
			if(i != row){
				if(board[i][col] == c)
					return false;
			}
			int x = 3 * (row/3) + i/3;
			int y = 3 * (col/3) + i%3;
			if((x) != row and (y) != col){
				if(board[x][y] == c)
					return false;
			}                                    
		}
        return true;
	}
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    	int n = board.size();
    	int m = board[0].size(); 
        vector<vector<bool>> visited(n, vector<bool>(m));
        for(int i=0;i<n;i++){
        	for(int j=0;j<m;j++){
        		if(board[i][j] != '.'){
        			visited[i][j] = false;
        		}else{
        			visited[i][j] = true;
        		}
        	}
        }
        return solve(board, visited);
    }
};

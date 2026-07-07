class Solution {
public:

   void dfs(int i, int j,vector<vector<char>>& grid){
        if(i<0||j<0||i>grid.size()-1||j>grid[0].size()-1){
            return;
        }
        if(grid[i][j]=='X'){
            return;
        }
        if(grid[i][j]=='2'){
            return;
        }
        grid[i][j]='2';

        dfs(i+1,j,grid);
        dfs(i-1,j,grid);
        dfs(i,j+1,grid);
        dfs(i,j-1,grid);

    }
    void solve(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(i==0||i==board.size()-1||j==0||j==board[0].size()-1){
                    if(board[i][j]=='O'){
                   
                    dfs(i, j,board);
                }
                }
                
            }
        }for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='2'){
                    board[i][j]='O';
                }
            }
        }
    }
};

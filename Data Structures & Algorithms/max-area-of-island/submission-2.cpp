class Solution {
public:
  int m=0;
   int dfs(int i, int j,vector<vector<int>>& grid,int k){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()){
            return 0;
        }
        if(grid[i][j]==0){
            return 0;
        }
        grid[i][j]=0; 
        
        int a=dfs(i+1,j,grid,k);
        int b=dfs(i-1,j,grid,k);
        int c=dfs(i,j+1,grid,k);
        int d=dfs(i,j-1,grid,k);
        return a+b+c+d+1;
         
    }    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
           for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    int k=dfs(i, j,grid,0);
                    if(k>m){
                        m=k;
                    }
                }
            }
        }
        return m;
    }
};

class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int l=0;
       int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};
       for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]==0){
                q.push({i,j});
            }
        }
       } while(!q.empty()){
           l++;
           int m=q.size();
           for(int v=0;v<m;v++){
           auto[r,c]=q.front();
           q.pop();
           for(int k=0;k<4;k++){

        int nr=r+dr[k];
        int nc=c+dc[k];

        if(nr>=0 && nc>=0 &&
           nr<grid.size() && nc<grid[0].size()&&
           grid[nr][nc]==2147483647){

            grid[nr][nc]=l;
            q.push({nr,nc});
        }
    }
           


       }
       }
      

                
        
       
    }
};

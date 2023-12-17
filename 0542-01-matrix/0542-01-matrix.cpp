class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
	    int m=grid[0].size();
	    queue<pair<pair<int,int>, int>> q;
	    vector<vector<int>> vis(n, vector<int>(m,0));
	    vector<vector<int>> dis(n, vector<int>(m,0));
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(grid[i][j]==0)
	            {
	                q.push({{i,j},0});
	                vis[i][j]=1;
	            }

	        }
	    }
	   int drow[]= {-1, 0, +1, 0};
	   int dcol[]= {0, +1, 0, -1};
	    
	    while(!q.empty())
	    {
	        int row=q.front().first.first;
	        int col=q.front().first.second;
	        int steps=q.front().second;
	        q.pop();
	        dis[row][col]=steps;
	        
	        for(int i=0;i<4;i++)
	        {
	            int nrow=row+drow[i];
	            int ncol=col+dcol[i];
	            
	            if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && !vis[nrow][ncol])
	            {
	                vis[nrow][ncol]=1;
	                q.push({{nrow,ncol},steps+1});
	            }
	        }
	       
	    }
	    return dis;
    }
};
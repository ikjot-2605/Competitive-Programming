// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
public:
    //Function to find the number of islands.
    void DFS(vector<vector<int>> &M, int i, int j, int ROW,
         int COL)
{
    //Base condition
    //if i less than 0 or j less than 0 or i greater than ROW-1 or j greater than COL-  or if M[i][j] != 1 then we will simply return
    if (i < 0 || j < 0 || i > (ROW - 1) || j > (COL - 1) || M[i][j] != 1)
    {
        return;
    }
 
    if (M[i][j] == 1)
    {
        M[i][j] = 0;
        DFS(M, i + 1, j, ROW, COL);     //right side traversal
        DFS(M, i - 1, j, ROW, COL);     //left side traversal
        DFS(M, i, j + 1, ROW, COL);     //upward side traversal
        DFS(M, i, j - 1, ROW, COL);     //downward side traversal
        DFS(M, i + 1, j + 1, ROW, COL); //upward-right side traversal
        DFS(M, i - 1, j - 1, ROW, COL); //downward-left side traversal
        DFS(M, i + 1, j - 1, ROW, COL); //downward-right side traversal
        DFS(M, i - 1, j + 1, ROW, COL); //upward-left side traversal
    }
}
    int numIslands(vector<vector<char>> &grid)
    {
        
        int ROW = grid.size();
    int COL = grid[0].size();
        vector<vector<int>> M(ROW,vector<int>(COL,0));
    for(int i = 0;i<ROW;i++){
            for(int j = 0;j<COL;j++){
                M[i][j] = grid[i][j] - '0';
            }
        }
    int count = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (M[i][j] == 1)
            {
                M[i][j] = 0;
                count++;
                DFS(M, i + 1, j, ROW, COL);     //right side traversal
                DFS(M, i - 1, j, ROW, COL);     //left side traversal
                DFS(M, i, j + 1, ROW, COL);     //upward side traversal
                DFS(M, i, j - 1, ROW, COL);     //downward side traversal
                DFS(M, i + 1, j + 1, ROW, COL); //upward-right side traversal
                DFS(M, i - 1, j - 1, ROW, COL); //downward-left side traversal
                DFS(M, i + 1, j - 1, ROW, COL); //downward-right side traversal
                DFS(M, i - 1, j + 1, ROW, COL); //upward-left side traversal
            }
        }
    }
    return count;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.numIslands(grid);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends
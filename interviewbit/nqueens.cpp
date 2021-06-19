#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <iostream>
#include <stack>
#include <queue>
#include <climits>
#include <iomanip>
#include <iterator>

using namespace std;

vector<vector<string>> ans;
bool isSafe(vector<string> board,int col,int row){
    int i, j;
  
    /* Check this row on left side */
    for (i = 0; i < col; i++)
        if (board[row][i]=='Q')
            return false;
  
    /* Check upper diagonal on left side */
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j]=='Q')
            return false;
  
    /* Check lower diagonal on left side */
    for (i = row, j = col; j >= 0 && i < board.size(); i++, j--)
        if (board[i][j]=='Q')
            return false;
  
    return true;
}
bool backtrack(int n,vector<string> currentBoard,int num_placed,int colNum){
    if(num_placed==n){
        ans.push_back(currentBoard);
        return true;
    }
    for(int i =0 ;i<n;i++){
        if(isSafe(currentBoard,colNum,i)){
            currentBoard[i][colNum] = 'Q';
            backtrack(n,currentBoard,num_placed+1,colNum+1);
            currentBoard[i][colNum] = '.';
        }
    }
    if(ans.size()==0)return false;
    return true;
    
}
vector<vector<string> > solveNQueens(int A) {
    ans.clear();
    vector<string> c(A);
    for(int i =0;i<A;i++){
        for(int j = 0;j<A;j++){
            c[i].push_back('.');
        }
    }
    if(backtrack(A,c,0,0)){
        return ans;
        
    }
    else{return {};}
}
int main(){
   solveNQueens(4);
   cout<<ans.size()<<endl;
   cout<<ans[0].size()<<endl;
   cout<<ans[1].size()<<endl;
    for(int i = 0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<endl;
        }
    }
}
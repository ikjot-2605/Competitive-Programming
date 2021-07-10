// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minCost(int N, vector<int> cost[]) {
        int n = N;
        //return n;
        vector<vector<int>> dp(n,vector<int>(3,0));
        dp[0][0] = cost[0][0];
        dp[0][1] = cost[0][1];
        dp[0][2] = cost[0][2];
        for(int i = 1;i<n;i++){
            for(int j= 0;j<3;j++){
                dp[i][j] = min(dp[i-1][(j+1)%3]+cost[i][j],dp[i-1][(j+2)%3]+cost[i][j]);
            }
        }
        return min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]));
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> cost[N];
        int x, y, z;
        for(int i = 0;i < N;i++){
            cin>>x>>y>>z;
            cost[i].push_back(x);
            cost[i].push_back(y);
            cost[i].push_back(z);
        }
        
        Solution ob;
        cout<<ob.minCost(N, cost)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
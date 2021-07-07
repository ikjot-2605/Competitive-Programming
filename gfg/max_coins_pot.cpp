// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int maxCoins(vector<int>&A,int n)
    {
	    int dp[n][n];
        memset(dp,-1,sizeof(dp));
        for(int i =0 ;i<n;i++){
            dp[i][i]=A[i];
            if(i+1<n)dp[i][i+1]= max(A[i],A[i+1]);
        }
        for(int i =0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(dp[i][j]!=-1){
                    dp[i][j] = max(dp[i][j-1]+A[j],dp[i-1][j]+A[i]);
                }
            }   
        }
        return dp[n-1][n-1];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int>A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.maxCoins(A, N) << "\n";
    }
    return 0;
}
  // } Driver Code Ends
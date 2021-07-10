// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    vector<vector<int>> dp;
    int util(int arr[],int l,int r){
        if(l==r)dp[l][r]= arr[l];
        if(l+1==r)dp[l][r] = max(arr[l],arr[r]);
        if(dp[l][r]==0){
            int start = arr[l]+min(util(arr,l+1,r-1),util(arr,l+2,r));
            int end = arr[r] + min(util(arr,l,r-2),util(arr,l+1,r-1));
            dp[l][r] = max(start,end);
        }
        return dp[l][r];
    }
    bool is1winner(int N,int arr[]) {
        vector<vector<int>> dap(N,vector<int>(N,0));
        dp = dap;
        int sum1 = util(arr,0,N-1);
        int sum = 0; 
        for(int i =0 ;i<N;i++){
            sum += arr[i];
        }
        if(sum1>sum-(sum1)){
            return true;
        }
        else return false;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.is1winner(N, arr) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
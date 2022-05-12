// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int indegree[n]={0},outdegree[n]={0};
      
    //query for all edges
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int x = M[i][j];
              
            //set the degrees
            outdegree[i]+=x;
            indegree[j]+=x;
        }
    }
      
    //find a person with indegree n-1
    //and out degree 0
    for(int i=0; i<n; i++)
    if(indegree[i] == n-1 && outdegree[i] == 0)
        return i;
      
    return -1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends
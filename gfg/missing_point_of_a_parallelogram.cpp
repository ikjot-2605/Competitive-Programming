//TODO
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    pair<vector<int>,vector<int>> findPoints(vector<int> point, float m, float l){

    }
    vector<double> findPoint(int A[], int B[], int C[])
    {
        vector<double> answer;
        answer.push_back(A[0]+C[0]-B[0]);
        answer.push_back(A[1]+C[1]-B[1]);
        return answer;
    } 
};

// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
	while (t--)
	{
		int A[2];
		int B[2];
		int C[2];
		cin >> A[0] >> A[1] >> B[0] >> B[1] >> C[0] >> C[1];
		Solution ob;
		vector<double> ans = ob.findPoint(A,B,C);
		printf("%0.6f %0.6f\n",ans[0],ans[1]);
	}
}
  // } Driver Code Ends
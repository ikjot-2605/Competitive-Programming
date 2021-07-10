// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& arr, int n) {
        for(int i = n-1;i>=0;i-=2){
            for(int j = 0;j<i;j++){
                int start = (n-i)/2;
                swap(arr[start+j][start],arr[n-start-1][j+start]);
                swap(arr[n-start-j-1][n-1-start],arr[start][n-start-1-j]);
                swap(arr[start+j][start],arr[n-j-1-start][n-start-1]);
            }
        }
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; i++) {
            vector<int> a;
            for (int j = 0; j < n; j++) {
                cin >> x;
                a.push_back(x);
            }
            arr.push_back(a);
        }
        Solution ob;
        ob.rotateMatrix(arr, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
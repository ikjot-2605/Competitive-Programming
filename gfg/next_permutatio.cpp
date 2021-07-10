// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int index = -1;
        int flag = 0;
        for(int i= N-1;i>=1;i--){
            if(arr[i]>arr[i-1]){
                flag =1;
                index = i-1;
                break;
            }
        }
        if(flag==0){sort(arr.begin(),arr.end());return arr;}
        int indexto = -1;
        int mini = INT_MAX;
        for(int i = index+1;i<N;i++){
            if(arr[i]>arr[index]){
                if(arr[i]<mini){
                    mini = arr[i];
                    indexto=i;
                }
            }
        }
        swap(arr[index],arr[indexto]);
        //return {};
        sort(arr.begin()+index+1,arr.end());
        return arr;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends    
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Functio to find first smallest positive
// missing number in the array
vector<int> segregate(int arr[],int n){
    vector<int> positives;
    for(int i =0;i<n;i++){
        if(arr[i]>0){
            positives.push_back(arr[i]);
        }
    }
    return positives;
}
int missingNumber(int arr[], int n) { 
    vector<int> realtest;
    realtest = segregate(arr,n);
    for(int i=0;i<realtest.size();i++){
        if(abs(realtest[i])<=realtest.size()&&realtest[abs(realtest[i])-1]>0)realtest[abs(realtest[i])-1]*=-1;
    }
    for(int i =0;i<realtest.size();i++){
        if(realtest[i]>0){
            return i+1;
        }
    }
    return realtest.size()+1;
} 

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        //calling missingNumber()
        cout<<missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
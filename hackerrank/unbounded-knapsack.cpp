#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <iostream>
#include<stack>
#include<queue>

#define ll long long int
#define all(x) x.begin(), x.end()
#define MOD 1000000007


using namespace std;
int unboundedKnapsack(int n, vector<int> S,int m) {
    int i, j, x, y; 
  
    int table[n + 1][m]; 
    
    for (i = 0; i < m; i++) 
        table[0][i] = 1; 
  
   
    for (i = 1; i < n + 1; i++) 
    { 
        for (j = 0; j < m; j++) 
        { 
            
            x = (i-S[j] >= 0) ? table[i - S[j]][j] : 0; 
  
            y = (j >= 1) ? table[i][j - 1] : 0; 
  
            table[i][j] = x + y; 
        } 
    } 
    for(int i=n;i>=0;i--){
        if(table[i][m-1]!=0)
            {cout<<i<<"\n";
            return i;}
    }
    cout<<"0\n";
    return 0; 

}
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int dum;
        cin>>dum;
        arr.push_back(dum);
    }
    unboundedKnapsack(k,arr,arr.size());
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
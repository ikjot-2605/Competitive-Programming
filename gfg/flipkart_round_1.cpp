
/*COMPETITIVE PROGRAMMING C++ TEMPLATE */

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

#define all(x) x.begin(), x.end()
#define MOD 998244353
const unsigned int M = 1000000007;
const long double PI = 3.141592653589793236L;

typedef long long int ll;
typedef long double ld;
#define MAX 50
using namespace std;

void solvea()
{
   string n;
   cin>>n;
   vector<int> val;
   for(int i =0;i<n.length();i++){
       val.push_back(n[i]-48);
   }
    sort(val.begin(),val.end());
    int smallest_index=INT_MAX;
    for(int i =0;i<val.size();i++){
        if(val[i]!=0){smallest_index = i;break;}
    }
    string ans;
    ans.push_back(val[smallest_index]+48);
    for(int i =0;i<val.size();i++){
        if(i!=smallest_index)
            ans.push_back(val[i]+48);
    }
    cout<<ans<<endl;
}
//TODO
void solveb(){
    int n,m;
    cin>>n>>m;
    //n is mics
    int teams[m];
    for(int i = 0;i<m;i++){
        cin>>teams[i];
    }
    multiset<int> teams_set;
    for(int i = 0;i<m;i++){
        teams_set.insert(teams[i]);
    }
    int count = m;
    while(m<n){
        auto last_iterator = teams_set.rbegin();
        int c = *last_iterator;
        auto second_last_iterator =teams_set.lower_bound(c);
        int val_smaller = *(--second_last_iterator);
        
    }
}
void depthFirst(int v, vector<int> graph[], 
                vector<bool>& visited, 
                int& sum, 
                vector<int> values) 
{ 
    visited[v] = true; 
  
    sum += values[v - 1]; 
  
    for (int i =0;i<graph[v-1].size();i++) { 
  
        if (visited[graph[v-1][i]] == false) { 
  
            depthFirst(graph[v-1][i], graph, visited, 
                       sum, values); 
        } 
    } 
} 
void solvec(){
    int v,e;
    cin>>v>>e;
    vector<int> Values(v);
    vector<vector<int>> Edges(e,vector<int>(2));
    for(int i = 0;i<v;i++){
        cin>>Values[i];
    }
    for(int i = 0;i<e;i++){
        cin>>Edges[i][0]>>Edges[i][1];
    }
    vector<int> graph[v];
    for(int i =0;i<e;i++){
        graph[Edges[i][0]-1].push_back(Edges[i][1]);
    }
    vector<bool> visited(Values.size() + 1, false); 
    int maxValueSum = INT_MIN; 
     for (int i = 1; i <= v; i++) { 
        if (visited[i] == false) { 
  
            int sum = 0; 
            depthFirst(i, graph, visited, 
                       sum, Values); 
            if (sum > maxValueSum) { 
                maxValueSum = sum; 
            } 
            
        } 
    }
    cout<<maxValueSum<<endl; 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solvec();
    }

    return 0;
}

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

void solve(int n)
{
    vector<int> res(1, 1);
    int two = 0, three = 0, five = 0, next = 1;
    n = n - 1;
    while (n--)
    {
        next = min(res[two] * 2, min(res[three] * 3, res[five] * 5));
        if (next == res[two] * 2)
        {
            two++;
        }
        if (next == res[three] * 3)
        {
            three++;
        }
        if (next == res[five] * 5)
        {
            five++;
        }
        res.push_back(next);
    }
    cout << res.back();
}
bool isCyclicUtil(vector<vector<int>> adj,int v, bool visited[], bool recStack[]) 
{ 
    if(visited[v] == false) 
    { 
        // Mark the current node as visited and part of recursion stack 
        visited[v] = true; 
        recStack[v] = true; 
  
        // Recur for all the vertices adjacent to this vertex 
        int i=0;
        for(i = 0; i < adj[v].size(); i++) 
        { 
            if ( !visited[adj[v][i]] && isCyclicUtil(adj,adj[v][i], visited, recStack) ) 
                return true; 
            else if (recStack[adj[v][i]]) 
                return true; 
        } 
  
    } 
    recStack[v] = false;  // remove the vertex from recursion stack 
    return false; 
} 
bool isCyclic(vector<vector<int>> adj,int V) 
{ 
    bool visited[V]; 
    bool recStack[V]; 
    for(int i = 0; i < V; i++) 
    { 
        visited[i] = false; 
        recStack[i] = false; 
    } 
  
    for(int i = 0; i < V; i++) 
        if (isCyclicUtil(adj,i, visited, recStack)) 
            return true; 
  
    return false; 
} 
vector<vector<int>> addEdge(vector<vector<int>> adj,int u,int v){
        adj[u].push_back(v);
        return adj;
    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int numCourses = 2;
    vector<vector<int>> prerequisites = {{1,0}};
    vector<vector<int>> adj;
    for(int i=0;i<numCourses;i++){
        adj.push_back({});
    }
    for(int i=0;i<prerequisites.size();i++){
        adj=addEdge(adj,prerequisites[i][0],prerequisites[i][1]);
    }
    int x = 10;
    int T = 1;
    //cin >> T;
    while (T--)
    {
        cout<<isCyclic(adj,numCourses);
    }

    return 0;
}
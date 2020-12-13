
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


class Graph 
{ 
    int V;    
    vector<int> *adj; 
  

    void DFSUtil(int v, bool visited[]); 
public: 
    Graph(int V);   
  
    void addEdge(int v, int w); 
  
   
    void DFS(int v); 
    int findMother();
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new vector<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); 
} 
  
void Graph::DFSUtil(int v, bool visited[]) 
{ 
    
    visited[v] = true; 
    
  
    vector<int>::iterator i; 
    for (i = adj[v].begin(); i != adj[v].end(); ++i) 
        if (!visited[*i]) 
            DFSUtil(*i, visited); 
} 
  

void Graph::DFS(int v) 
{ 
    bool *visited = new bool[V]; 
    for (int i = 0; i < V; i++) 
        visited[i] = false; 
  
   
    DFSUtil(v, visited); 
} 
int Graph::findMother(){
    
}
void solve(Graph g,int count,int graphSize)
{
   
}

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count=0;
    int T = 1;
    Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
    //cin >> T;
    while (T--)
    {
        solve(g,count,4);
    }

    return 0;
}
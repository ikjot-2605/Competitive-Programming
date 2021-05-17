
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
class Graph{
    public:
        int v;
        vector<vector<int>> adj;
        Graph(int v,vector<vector<int>> edges){
            vector<vector<int>> temp(v);
            adj = temp;
            for(int i =0;i<edges.size();i++){
                for(int j = 0;j<2;j++){
                    edges[i][j]--;
                }
            }
            for(int i =0;i<edges.size();i++){
                    adj[edges[i][0]].push_back(edges[i][1]);
                
            }
            this->v = v;
            this->adj=adj;
        }
};
bool dfsUtil(Graph g,int v,bool visited[],bool *recStack){
    if(visited[v]==false){
        visited[v]=true;
        recStack[v]=true;
        for(int i = 0;i<g.adj[v].size();i++){
            if(!visited[g.adj[v][i]]&&dfsUtil(g,g.adj[v][i],visited,recStack)){
                return true;
            }
            else if(recStack[g.adj[v][i]]){
                return true;
            }
        }
    }
    recStack[v]=false;
    return false;
}
int solveA(int A, vector<vector<int> > B)
{
        //B - edges
        //A - num_vertices
        Graph g(A,B);
        bool *visited = new bool[A];
        bool *recStack = new bool[A];
        for(int i = 0; i < A; i++)
        {
            visited[i] = false;
            recStack[i] = false;
        }
        for(int i =0;i<A;i++){
            if(dfsUtil(g,i,visited,recStack))return true;
        } 
        return false;
}
void solveB()
{
}
void solveC()
{
}
void solveD()
{
}
void solveE()
{
}
void solveF()
{
}
int main()
{
    cout << solveA(5,{{1,2},{4,1},{2,4},{3,4},{5,2},{1,3}});
    cout << solveA(5,{{1,2},{2,3},{3,4},{4,5}});    
}
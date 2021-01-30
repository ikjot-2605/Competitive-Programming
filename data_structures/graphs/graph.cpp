
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
struct Edge {
    int src, dest, weight;
};

typedef pair<int, int> Pair;
 
class Graph
{
public:
    vector<vector<Pair>> adjList;
 
    Graph(vector<Edge> const &edges, int N)
    {
        adjList.resize(N);
 
        for (auto &edge: edges)
        {
            int src = edge.src;
            int dest = edge.dest;
            int weight = edge.weight;
 
            adjList[src].push_back(make_pair(dest, weight));
 
            // Uncomment below line for undirected graph
            // adjList[dest].push_back(make_pair(src, weight));
        }
    }
};

void printGraph(Graph const &graph, int N)
{
    for (int i = 0; i < N; i++)
    {
        // print all neighboring vertices of given vertex
        for (Pair v : graph.adjList[i])
            cout << "(" << i << ", " << v.first <<
                    ", " << v.second << ") ";
        cout << endl;
    }
}

int main()
{
     vector<Edge> edges =
    {
        // (x, y, w) -> edge from x to y having weight w
        { 0, 1, 6 }, { 1, 2, 7 }, { 2, 0, 5 }, { 2, 1, 4 },
        { 3, 2, 10 }, { 5, 4, 1 }, { 4, 5, 3 }
    };
    
    // Number of nodes in the graph
    int N = 6;
    
    // construct graph
    Graph graph(edges, N);
    printGraph(graph, N);
}


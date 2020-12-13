#include <iostream>
#include <list>
#include <stack>
using namespace std;

class Graph
{
    int V;

    list<int> *adj;

    void topologicalSortUtil(int v, bool visited[],
                             stack<int> &Stack);

public:
    Graph(int V);

    void addEdge(int v, int w);

    list<int> topologicalSort();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::topologicalSortUtil(
    int v, bool visited[],
    stack<int> &Stack)
{
    visited[v] = true;

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            topologicalSortUtil(*i, visited, Stack);

    Stack.push(v);
}

list<int> Graph::topologicalSort()
{
    stack<int> Stack;

    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            topologicalSortUtil(i, visited, Stack);
    list<int> ans;
    while (Stack.empty() == false)
    {
        ans.push_back(Stack.top());
        Stack.pop();
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
    int n, m;
    cin >> n >> m;
    Graph g(n);
    list<list<int>> undirected;
    for (int i = 0; i < m; i++)
    {
        int type;
        cin >> type;
        if (type == 0)
        {
            int a,b;
            cin>>a>>b;
            g.addEdge(a,b);
        }
        else
        {
            int a,b;
            cin>>a>>b;
            undirected.push_back({a,b});
        }
    }
    list<int> topSort=g.topologicalSort();
    list<int>::iterator first;
    list<int>::iterator second; 
    list<list<int>> answer;
    for(int i=0;i<undirected.size();i++){
        
        // first=find(topSort.begin(),topSort.end(),undirected[i][0]);
        
        // second=find(topSort.begin(),topSort.end(),undirected[i][1]);
        // if(first==topSort.end()||second==topSort.end()){
        //     cout<<"NO\n";return 0;
        // }
        // else{
        //     if(first-second>0){
        //         answer.push_back({undirected[i][1],undirected[i][0]});
        //     }
        //     else{
        //     answer.push_back({undirected[i][0],undirected[i][1]});
        //     }
        // }
    }
   
    // cout<<"YES\n";
    // for(int i=0;i<answer.size();i++){
    //     cout<<answer[i][0]<<" "<<answer[i][1]<<endl;
    // }
    }
    return 0;
}
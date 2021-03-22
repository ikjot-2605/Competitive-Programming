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
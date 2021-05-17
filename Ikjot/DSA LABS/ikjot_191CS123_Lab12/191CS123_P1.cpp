//Ikjot's Lab 12 program - MST - Graph
#include <bits/stdc++.h>
using namespace std;
class Graph
{
    public:
        int vertices;
        int edges;
        vector<vector<int>> matrix;
};
Graph *graph = new Graph();
void minimum_spanning_tree(Graph *graph){
    set<int> vertices_set;
    set<pair<int,int>> edges_included;
    vertices_set.insert(0);
    while(vertices_set.size()!=graph->vertices){
        pair<int,int> min_edge;
        int min_weight = INT_MAX;
        for(auto it = vertices_set.begin();it!=vertices_set.end();it++){
            for(int i =0;i<graph->vertices;i++){
                if(edges_included.find({*it,i})!=edges_included.end()||vertices_set.find(i)!=vertices_set.end()){
                    continue;
                }
                else{
                    if(min_weight>graph->matrix[*it][i]&&graph->matrix[*it][i]!=0){
                        min_weight = graph->matrix[*it][i];
                        min_edge = {*it,i};
                    }
                }
            }
        }
            edges_included.insert(min_edge);
            vertices_set.insert(min_edge.second);
    }
    for(auto it = edges_included.begin();it!=edges_included.end();it++){
        cout<<"Edge between "<<(char)((*it).first+97)<<" and "<<(char)((*it).second+97)<<" of weight "<<graph->matrix[(*it).first][(*it).second]<<endl;
    }
    int minimum_weight_spanning_tree = 0;
    for(auto it = edges_included.begin();it!=edges_included.end();it++){
        minimum_weight_spanning_tree+=graph->matrix[(*it).first][(*it).second];
    }
    cout<<"Total weight of the minimum spanning tree is "<< minimum_weight_spanning_tree<<endl;
}
int main()
{
    cout<<"Kindly input number of vertices in graph : ";
    int number_of_vertices;
    cin>>number_of_vertices;
    graph->vertices = number_of_vertices;
    cout<<"Kindly input the cost adjacency matrix : \n";
    vector<vector<int>> temp( number_of_vertices , vector<int> (number_of_vertices, INT_MIN));
    for(int i = 0 ;i<number_of_vertices;i++){
        for(int j = 0;j<number_of_vertices;j++){
            cin>>temp[i][j];
        }
    } 
    graph->matrix = temp;
    cout<<"Here is the Minimum Spanning tree edge List : "<<endl;
            minimum_spanning_tree(graph);
}
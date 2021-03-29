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
                    if(min_weight>graph->matrix[*it][i]&&graph->matrix[*it][i]!=INT_MIN){
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
    vector<vector<int>> temp( number_of_vertices , vector<int> (number_of_vertices, INT_MIN)); 
    graph->matrix = temp;
    cout << "Welcome to the C++ Graphs - MST Program - Lab - 12(Listed Below are the available operations you can perform)" << endl;
    cout << "Press 1 to insert an edge into the Graph" << endl;
    cout << "Press 2 to obtain MST for current Graph."<<endl;
    cout << "Press 0 to exit the program." << endl
         << endl;


    while (true)
    {
        cout << "Enter your operation type : ";
        int type;
        cin >> type;
        cin.ignore(1, '\n');
        if (type == 0)
        {
            cout << "Thank you. Exiting." << endl
                 << endl;
            break;
        }
        if (type == 1)
        {
            cout<< "Kindly input starting node : ";
            char start_node;
            cin>>start_node;
            cout<<"Kindly input a destination node : ";
            char end_node;
            cin>>end_node;
            if(graph->matrix[start_node-97][end_node-97]!=INT_MIN){
                cout<<"The edge exists already.\n";
            }
            else{
                cout<<"Kindly input the weight of the edge : ";
                int weight_of_edge;
                cin>>weight_of_edge;
                if(weight_of_edge==INT_MIN){
                    cout<<"Edge weight too low, try again.\n";
                    continue;
                }
                graph->matrix[start_node-97][end_node-97] = weight_of_edge;
                graph->matrix[end_node-97][start_node-97] = weight_of_edge;
                cout<<"The edge from "<<start_node<<" to "<<end_node<<" of weight "<< weight_of_edge<<" has been added!\n";
            }
        }
        else if(type == 2){
            cout<<"Here is the Minimum Spanning tree edge List : "<<endl;
            minimum_spanning_tree(graph);
        }
        else
        {
            cout << "Kindly enter a valid choice." << endl;
        }
    }
}
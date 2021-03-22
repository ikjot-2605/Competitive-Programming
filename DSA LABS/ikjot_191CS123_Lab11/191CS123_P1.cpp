//Ikjot's Lab 11 program - Graphs
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

int main()
{
    cout<<"Kindly input number of vertices in graph : ";
    int number_of_vertices;
    cin>>number_of_vertices;
    graph->vertices = number_of_vertices;
    vector<vector<int>> temp( number_of_vertices , vector<int> (number_of_vertices, 0)); 
    graph->matrix = temp;
    cout << "Welcome to the C++ Graphs Program - Lab - 11(Listed Below are the available operations you can perform)" << endl;
    cout << "Press 1 to insert an edge into the Graph" << endl;
    cout << "Press 2 to Display all nodes reachable from given node." << endl;
    cout << "Press 3 to search for a particular node in the graph." << endl;
    cout << "Press 4 to check if graph is connected." << endl;
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
            if(graph->matrix[start_node-97][end_node-97]==1){
                cout<<"The edge exists already.\n";
            }
            else{
                graph->matrix[start_node-97][end_node-97] = 1;
                cout<<"The edge from "<<start_node<<" to "<<end_node<<" has been added!\n";
            }
        }
        else if (type == 2)
        {
            cout<<"Kindly enter the start node : ";
            char start_node;
            cin>>start_node;
            set<int> reachable_vertices;
            vector<bool> visited(number_of_vertices,0);
            queue<int> q;
            q.push(start_node-97);
            visited[start_node-97]=1;
            while(!q.empty()){
                int current = q.front();
                q.pop();
                for(int i =0;i<number_of_vertices;i++){
                    if(!visited[i]&&graph->matrix[current][i]){
                        visited[i]=1;
                        q.push(i);
                        reachable_vertices.insert(i);
                    }
                }
            }
            cout<<"The reachable vertices are : ";
            for(auto it = reachable_vertices.begin();it!=reachable_vertices.end();it++){
                cout<<(char)(*it+97)<<" ";
            }
            cout<<endl;
        }
        else if (type == 3)
        {
            cout<<"Kindly input the start node : ";
            char start_node ; 
            cin>>start_node;
            cout<<"Kindly input the end node : ";
            char end_node;
            cin>>end_node;
            int from_node = start_node-97;
            int to_node = end_node - 97;
            vector<int> parent_array(number_of_vertices,-1);
            vector<bool> visited(number_of_vertices,0);
            queue<int> q;
            q.push(from_node);
            visited[from_node]=1;
            int found = 0;
            while(!q.empty()){
                int temp = q.front();
                q.pop();
                for(int i =0;i<number_of_vertices;i++){
                    if(visited[i]!=1&&graph->matrix[temp][i]){
                        visited[i]=1;
                        q.push(i);
                        parent_array[i]=temp;
                        if(i==to_node){
                            found =1 ;
                            int curr= i;
                            while(curr!=from_node){
                                cout<<(char)(curr+97)<<" <- ";
                                curr = parent_array[curr];
                            }
                            cout<<(char)(curr+97)<<endl;
                            break;
                        }
                    }
                }
            }
            if(found==0){
                cout<<"Path doesn't exist\n";
            }
        }
        else if(type==4){
            vector<vector<int>> temporary = graph->matrix;
            //making it an undirected graph and checking
            //if it is connected
            //to ensure that the directed counterpart is weakly connected
            for(int i =0;i<number_of_vertices;i++){
                for(int j =0;j<number_of_vertices;j++){
                    if(temporary[i][j]==1){
                        temporary[j][i]=1;
                    }
                }    
            }
            vector<bool> visited(number_of_vertices,0);
            queue<int> q;
            q.push(0);
            visited[0]=1;
            while(!q.empty()){
                int temp = q.front();
                q.pop();
                for(int i = 0;i<number_of_vertices;i++){
                    if(!visited[i]&&temporary[temp][i]==1){
                        visited[i]=1;
                        q.push(i);
                    }
                }
            }
            int flag =0;
            for(int i = 0;i<number_of_vertices;i++){
                if(visited[i]==0){
                    flag=1;
                    cout<<"The graph is not weakly connected.\n";
                }
            }
            if(flag==0){
                cout<<"The graph is weakly connected.\n";
            }
        }
        else
        {
            cout << "Kindly enter a valid choice." << endl;
        }
    }
}
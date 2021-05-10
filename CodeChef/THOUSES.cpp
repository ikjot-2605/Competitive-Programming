
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
class Node{
    public:
        int id;
        int value;
        vector<Node*> kids;
        Node(int id,int value){
            this->id = id;
            this->value = value;
            this->kids = {};
        }
};
int numberOfChildren(Node* root){
    int answer = 0;
    queue<Node*> q;
    for(int i =0;i<root->kids.size();i++){
        q.push(root->kids[i]);
    }
    while(!q.empty()){
        Node *curr = q.front();
        answer++;
        q.pop();
        for(int i =0;i<curr->kids.size();i++){
            q.push(curr->kids[i]);
        }
    }
    return answer;
}
bool compareKids(Node* node1,Node* node2){
    return numberOfChildren(node1)>numberOfChildren(node2);
}
void solveA(){
    int n,x;
    cin>>n>>x;
    Node *root = new Node(1,x);
    vector<Node*> nodes(n);
    nodes[0]=root;
    for(int i =1;i<n;i++){
        nodes[i] = new Node(i+1,-1);
    }
    for(int i = 0;i<n-1;i++){
        int lesser,more;
        cin>>lesser>>more;
        if(lesser>more)swap(lesser,more);
        nodes[lesser-1]->kids.push_back(nodes[more-1]);
    }
    queue<int> q;
    q.push(1);
    ll answer = 0;
    while(!q.empty()){
        int val = q.front();
        q.pop();
        Node *currentParent = nodes[val-1];
        answer = (answer+currentParent->value)%M;
        vector<Node*> *kids = &(currentParent->kids);
        for(int i = 0;i<n;i++){
            sort((*kids).begin(),(*kids).end(),compareKids);
        }
        for(int i =0;i<(*kids).size();i++){
            q.push((*kids)[i]->id);
            (*kids)[i]->value = (i+1)*currentParent->value;
        }
    }
    cout<<answer<<endl;
}
void solveB(){

}
void solveC(){

}
void solveD(){

}
void solveE(){

}
void solveF(){

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solveA();
    }

    return 0;
}

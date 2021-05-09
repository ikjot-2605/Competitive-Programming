
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

void solveA(){
    int n,x;
    cin>>n>>x;
    Node *root = new Node(1,x);
    map<int,Node*> map;
    vector<Node> hi;
    for(int i =1;i<=n;i++){
        Node node1(i,-1);
        if(i==1)node1.value = x;
        hi.push_back(node1);
        map.insert(make_pair(i,&hi[i]));
    }
    for(int i =1;i<=n;i++){
        map[i]->id=i;
        if(i!=1)map[i]->value = -1;
        else map[i]->value = x;
        map[i]->kids = {};
    }
    for(int i =0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        if(a<b){
            Node *val = map[b];
            vector<Node*> vals = map[a]->kids;
            vals.push_back(map[b]);
            map[a]->kids = vals;
        }
        else{
            map[b]->kids.push_back(map[a]);
        }
    }
    queue<int> q;
    q.push(1);
    ll answer=0;
    while(!q.empty()){
        int parent_id = q.front();
        q.pop();
        answer = (answer+map[parent_id]->value)%M;
        vector<Node*> kids = map[parent_id]->kids;
        for(int i =0;i<kids.size();i++){
            q.push(kids[i]->id);
            kids[i]->value=(i+1)*map[parent_id]->value;
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

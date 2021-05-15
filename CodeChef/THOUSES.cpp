
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
        int parent;
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
    vector<Node*> nodes(n+1);
    nodes[1]=root;
    nodes[1]->parent=-1;
    for(int i =2;i<=n;i++){
        nodes[i] = new Node(i,-1);
    }
    for(int i = 0;i<n-1;i++){
        int lesser,more;
        cin>>lesser>>more;
        if(lesser>more)swap(lesser,more);
        nodes[lesser]->kids.push_back(nodes[more]);
    }
    
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

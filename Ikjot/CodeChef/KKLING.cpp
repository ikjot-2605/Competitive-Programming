
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
        int parent;
        int curr_pos;
        vector<Node*> kids;
        Node(int id){
            this->id = id;
            this->kids = {};
            this->parent=-1;
            this->curr_pos=id;
        }
};
//TODO
void solveA(){
	ll n;
    cin>>n;
    Node* allVals[n+1];
    for(int i = 1;i<=n;i++){
        allVals[i] = new Node(i);
    }
    allVals[1]->parent=-1;
    
    for(int i =0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        allVals[a]->kids.push_back(allVals[b]);
        allVals[b]->parent=a;
    }
    vector<Node*> leaves;
    for(int i =1;i<=n;i++){
        if(allVals[i]->kids.size()==0){
            leaves.push_back(allVals[i]);
        }
    }
    //simulation starts now
    int count_of_days = 0;
    while(true){
        int any_reached = 0;
        for(int i =1;i<=leaves.size();i++){
            if(leaves[i]->curr_pos==1){
                any_reached=1;
                break;
            }    
        }
        if(any_reached){
            break;
        }
        else{
            for(int i =0;i<leaves.size();i++){
                for(int j=0;j<leaves.size()&&j!=i;j++){
                    int temp = leaves[j]->curr_pos;
                    while(temp!=1){
                        if(temp==leaves[i]->curr_pos){

                        }
                    }
                }
            }
            count_of_days++;
        }
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

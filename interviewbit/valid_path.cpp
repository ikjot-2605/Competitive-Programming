
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

string solveA(int A, int B, int C, int D, vector<int> E, vector<int> F){
    pair<int,int> endpoint = {A,B};
    int num_circles = C;
    int radius = D;
    vector<int> x_c = E;
    vector<int> y_c = F;
    int visited[A+1][B+1];
    for(int i =0;i<A+1;i++){
        for(int j = 0;j<B+1;j++){
            visited[i][j]=0;
        }
    }
    for(int i = 0;i<num_circles;i++){
        for(int j = 0;j<A+1;j++){
            for(int k=0;k<B+1;k++){
                if(pow(x_c[i]-j,2)+pow(y_c[i]-k,2)<=pow(radius,2)){
                    visited[j][k]=-1;
                }
            }
        }
    }
    queue<pair<int,int>> q;
    q.push({0,0});
    while(!q.empty()){
        pair<int,int> curr = q.front();
        q.pop();
        int i = curr.first;
        int j = curr.second;
        if(i+1<=endpoint.first&&j+1<=endpoint.second&&i+1>=0&&j+1>=0&&visited[i+1][j+1]==0){
            visited[i+1][j+1]=1;
            q.push({i+1,j+1});
        }
        if(i<=endpoint.first&&j+1<=endpoint.second&&i>=0&&j+1>=0&&visited[i][j+1]==0){
            visited[i][j+1]=1;
            q.push({i,j+1});
        }
        if(i-1<=endpoint.first&&j+1<=endpoint.second&&i-1>=0&&j+1>=0&&visited[i-1][j+1]==0){
            visited[i-1][j+1]=1;
            q.push({i-1,j+1});
        }
        if(i+1<=endpoint.first&&j<=endpoint.second&&i+1>=0&&j>=0&&visited[i+1][j]==0){
            visited[i+1][j]=1;
            q.push({i+1,j});
        }
        if(i-1<=endpoint.first&&j<=endpoint.second&&i-1>=0&&j>=0&&visited[i-1][j]==0){
            visited[i-1][j]=1;
            q.push({i-1,j});
        }
        if(i-1<=endpoint.first&&j-1<=endpoint.second&&i-1>=0&&j-1>=0&&visited[i-1][j-1]==0){
            visited[i-1][j-1]=1;
            q.push({i-1,j-1});
        }
        if(i<=endpoint.first&&j-1<=endpoint.second&&i>=0&&j-1>=0&&visited[i][j-1]==0){
            visited[i][j-1]=1;
            q.push({i,j-1});
        }
        if(i+1<=endpoint.first&&j-1<=endpoint.second&&i+1>=0&&j-1>=0&&visited[i+1][j-1]==0){
            visited[i+1][j-1]=1;
            q.push({i+1,j-1});
        }
        if(i==endpoint.first&&j==endpoint.second){
            return "YES";
        }
    }
    return "NO";
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
int main(){
    cout<<solveA(41,67,5,0,{17, 16, 12, 0, 40},{52, 61, 61, 25, 31})<<endl;
}
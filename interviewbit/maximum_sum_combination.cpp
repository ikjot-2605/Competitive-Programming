
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

vector<int> solveA(){
	int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        cin>>b[i];
    }
    int c;
    cin>>c;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    priority_queue<pair<int, pair<int, int> > > pq;
    set<pair<int, int> > my_set;
    pq.push(make_pair(a[n - 1] + b[n - 1],
                      make_pair(n - 1, n - 1)));
                      my_set.insert(make_pair(n - 1, n - 1));
                      vector<int> answer;
    for (int count = 0; count < c; count++)
    {
        pair<int, pair<int, int> > temp = pq.top();
        pq.pop();
 
        answer.push_back(temp.first);
 
        int i = temp.second.first;
        int j = temp.second.second;
 
        int sum = a[i - 1] + b[j];

        pair<int, int> temp1 = make_pair(i - 1, j);

        if (my_set.find(temp1) == my_set.end())
        {
            pq.push(make_pair(sum, temp1));
            my_set.insert(temp1);
        }
 
        sum = a[i] + b[j - 1];
        temp1 = make_pair(i, j - 1);
 
        if (my_set.find(temp1) == my_set.end())
        {
            pq.push(make_pair(sum, temp1));
            my_set.insert(temp1);
        }
    }
    return answer;
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

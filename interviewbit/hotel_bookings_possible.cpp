
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
class ActivityClass{
    public:
        int id;
        int start;
        int finish;
        ActivityClass(int id,int start,int finish){
            this->id = id;
            this->start = start;
            this->finish = finish;
        }
};
bool compareFn(ActivityClass a1,ActivityClass a2){
    return a1.finish<=a2.finish;
}
bool solveA(vector<int> arrive,vector<int> finish,int K){
    sort(arrive.begin(), arrive.end());
    sort(finish.begin(), finish.end());
     
    for(int i = 0; i < finish.size(); i++)
    {
        if (i + K < finish.size() && arrive[i + K] < finish[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        cout<<solveA({1,2,3,4},{10,2,6,14},2);
    }

    return 0;
}

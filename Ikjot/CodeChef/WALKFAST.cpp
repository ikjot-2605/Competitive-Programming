
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

void solveA()
{
  int n,A,B,C,D,p,q,y;
  cin>>n>>A>>B>>C>>D>>p>>q>>y;
  int x[n];
  for(int i = 0;i<n;i++){
    cin>>x[i];
  }
  int time1 = 0;
  //without train
  int time2  = 0;
  //with train
  time1 = abs(x[B-1]-x[A-1])*p;
  int timeTakeToReachStation = abs(x[A-1]-x[C-1])*p;
  if(timeTakeToReachStation>y){
    time2=time1;
  }
  else{
    time2 = y + abs(x[C-1]-x[D-1])*q +abs(x[B-1]-x[D-1])*p;
  }
  cout<<min(time1,time2)<<endl;
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

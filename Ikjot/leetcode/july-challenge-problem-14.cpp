
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
// vector<int> swap(vector<int> nums,int index1,int index2){
//     int temp=nums[index1];
//     nums[index1]=nums[index2];
//     nums[index2]=temp;
//     return nums;
// }
double solve(int hour,int minute)
{   
   if(hour==12){hour=0;}
   int totalmins=hour*60+minute;
   double minutesangle=((double)minute/60)*360;
   double hoursangle=((double)hour/12)*360+(double)minute/2; 
   return min(abs(minutesangle-hoursangle),abs(hoursangle-minutesangle)); 
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 10;
    int hour=4;
    int minute=50;
    int T = 1;
    //cin >> T;
    while (T--)
    {
        cout<<solve(hour,minute);
    }

    return 0;
}
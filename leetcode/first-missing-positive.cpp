
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
int solve(vector<int> nums)
{   
   for(int i=0;i<nums.size();i++){
       if(nums[i]>0&&nums[i]<nums.size()){
           int originalindex=i;
           int indexToSend=nums[i];
           int originalval=nums[i];
           int valtosend=nums[nums[i]]; 
           nums[i]=valtosend;
           nums[indexToSend]=originalval;
       }
   }
   for(int i=1;i<nums.size();i++){
       if(i!=nums[i]){
           cout<<i;
           return i;
       }
   }
   cout<<nums.size();
   return nums.size(); 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 10;
    vector<int> nums={3,4,-1,1};
    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve(nums);
    }

    return 0;
}
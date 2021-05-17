
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
using namespace std;
int hammingDistance(vector<int> A){
    int ans = 0;
    for(int i= 0;i<32;i++){
        int count = 0;
        for(int j =0;j<A.size();j++){
              if(A[j]&(1<<i)){
                  count++;
              }
        }
        ans = (ans + count*(A.size()-count)*2)%1000000007;
    }
    return ans;
}
int main(){
    return 0;
}
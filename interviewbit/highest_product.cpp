
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
vector<int> removeFirst(vector<int> A,int b){
    for(int i =0;i<A.size();i++){
        if(A[i]==b){A.erase(A.begin()+i);break;}
    }
    return A;
}
int solve(vector<int>A)
{
    int n = A.size();
    vector<int> temp = {A[0],A[1],A[2]};
    int first_biggest = max(A[0],max(A[1],A[2]));
    temp = removeFirst(temp,first_biggest);
    int third_biggest = min(A[0],min(A[1],A[2]));
    temp = removeFirst(temp,third_biggest);
    int second_biggest = temp[0];
    for(int i = 3;i<n;i++){
        if(A[i]>first_biggest){
            third_biggest = second_biggest;
            second_biggest = first_biggest;
            first_biggest = A[i];
        }
        else if(A[i]>second_biggest){
            third_biggest = second_biggest;
            second_biggest = A[i];
        }
        else if(A[i]>third_biggest){
            third_biggest = A[i];
        }
    }
    return first_biggest*second_biggest*third_biggest;
}

int main()
{
    cout<<solve({1, 3, 5, 2, 8, 0, -1, -3});

    return 0;
}
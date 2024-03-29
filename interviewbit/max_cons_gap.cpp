
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

int solve(vector<int> arr)
{
    int n = arr.size();
    // Find maximum and minimum in arr[]
    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < n; i++) {
        maxVal = max(maxVal, arr[i]);
        minVal = min(minVal, arr[i]);
    }
 
    // Arrays to store maximum and minimum values
    // in n-1 buckets of differences.
    int maxBucket[n - 1];
    int minBucket[n - 1];
    fill_n(maxBucket, n - 1, INT_MIN);
    fill_n(minBucket, n - 1, INT_MAX);
 
    // Expected gap for every bucket.
    float delta = (float)(maxVal - minVal) / (float)(n - 1);
 
    // Traversing through array elements and
    // filling in appropriate bucket if bucket
    // is empty. Else updating bucket values.
    for (int i = 0; i < n; i++) {
        if (arr[i] == maxVal || arr[i] == minVal)
            continue;
 
        // Finding index of bucket.
        int index = (float)(floor(arr[i] - minVal) / delta);
 
        // Filling/Updating maximum value of bucket
        if (maxBucket[index] == INT_MIN)
            maxBucket[index] = arr[i];
        else
            maxBucket[index]
                = max(maxBucket[index], arr[i]);
 
        // Filling/Updating minimum value of bucket
        if (minBucket[index] == INT_MAX)
            minBucket[index] = arr[i];
        else
            minBucket[index]
                = min(minBucket[index], arr[i]);
    }
 
    // Finding maximum difference between maximum value
    // of previous bucket minus minimum of current bucket.
    int prev_val = minVal;
    int max_gap = 0;
    for (int i = 0; i < n - 1; i++) {
        if (minBucket[i] == INT_MAX)
            continue;
        max_gap = max(max_gap, minBucket[i] - prev_val);
        prev_val = maxBucket[i];
    }
    max_gap = max(max_gap, maxVal - prev_val);
 
    return max_gap;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<solve({});

    return 0;
}
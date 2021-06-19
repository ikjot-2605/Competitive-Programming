
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
    int a, b;
    cin >> a >> b;
    cout << (float)(a * b) / (float)100 << endl;
}
void solveB()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    set<int> A;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        A.insert(arr[i]);
    }
    if (A.size() == n)
        cout << "Yes\n";
    else
        cout << "No\n";
}
void solveC()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (c % 2 == 0)
    {
        a = abs(a);
        b = abs(b);
    }

    if (a > b)
    {
        cout << ">" << endl;
    }
    else if (a < b)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "=" << endl;
    }
}
int binarySearch(vector<ll> arr, int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

void solveD()
{
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    map<ll, ll> arr;
    vector<ll> array;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        array.push_back(x);
        arr.insert({x, i});
    }

    for (int i = 0; i < q; i++)
    {
        ll k = 0;
        cin >> k;
        if (arr.find(k) != arr.end())
        {
            //element present
            int ind = binarySearch(array, 0, n - 1, k);
            int answer = ind + 1 + k;
            while (arr.find(answer) != arr.end())
            {
                int num_bw = arr[answer] - ind;
                answer = num_bw + answer;
            }
            cout << answer << endl;
        }
        else
        {
            if (k < array[0])
            {
                cout << k << endl;
            }
            else
            {
                int ind = *(lower_bound(array.begin(), array.end(), k));
                int answer = ind + 1 + k;
                while (arr.find(answer) != arr.end())
                {
                    int num_bw = arr[answer] - ind;
                    answer = num_bw + answer;
                }
                cout << answer << endl;
            }
        }
    }
}
void solveE()
{
}
void solveF()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solveD();
    }

    return 0;
}

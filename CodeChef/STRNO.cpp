//
// Created by ikjot-2605 on 14/04/20.
//

#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <iostream>
#include<stack>
#include<queue>

#define ll long long int
#define all(x) x.begin(), x.end()
#define MOD 1000000007


using namespace std;

void STRNO()
{
    ll x,k;
    cin >> x >> k;
    ll count=0;
    ll temp=x;
    if(x==1){cout << "0" << endl;return;}
    while (temp % 2 == 0)
    {
        count++;
        temp = temp/2;
    }

    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(x); i = i + 2)
    {
        // While i divides n, print i and divide n  
        while (temp % i == 0)
        {
            count++;
            temp = temp/i;
        }
    }

    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (temp > 2)
        count++;
    if(count<k)cout << "0" << endl;
    else cout << "1" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        STRNO();
    }
    return 0;
}


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
vector<string> ans;
void generateV(string current, int position, int open_c, int close_c, int n)
{
    if (current.length() == 2 * n)
    {
        ans.push_back(current);
        return;
    }
    else
    {
        if (close_c < open_c)
        {
            current+=')';
            generateV(current, position + 1, open_c, close_c + 1, n);
            current.pop_back();
        }
        if (open_c < n)
        {
            current+='(';
            generateV(current, position + 1, open_c + 1, close_c, n);
            current.pop_back();
        }
    }
}
vector<string> generateParenthesis(int A)
{
    if (A == 0)
        return {};
    if (A == 1)
        return {"()"};
    else
    {
        generateV("", 0, 0, 0, A);
        return ans;
    }
}
int main()
{
    vector<string> re = generateParenthesis(3);
    for (int i = 0; i < re.size(); i++)
    {
        cout << re[i] << endl;
    }
}
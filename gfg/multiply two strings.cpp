// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends

class Solution
{
public:
    /*You are required to complete below function */
    string getString(string big, string small, int numzeroes)
    {
        string ans = "";
        if(small=="0")return "0";
        int carry = 0;
        for (int i = big.length() - 1; i >= 0; i--)
        {
            int curr = carry + ((big[i] - '0') * (small[0] - '0'));
            ans.insert(ans.begin(), curr % 10 + '0');
            carry = curr / 10;
        }
        if (carry > 0)
        {
            ans = to_string(carry) + ans;
        }
        for (int i = 0; i < numzeroes; i++)
        {
            ans = ans + "0";
        }
        return ans;
    }
    string doSum(string a, string b)
    {
        if (a.size() < b.size())
            swap(a, b);

        int j = a.size() - 1;
        for (int i = b.size() - 1; i >= 0; i--, j--)
            a[j] += (b[i] - '0');

        for (int i = a.size() - 1; i > 0; i--)
        {
            if (a[i] > '9')
            {
                int d = a[i] - '0';
                a[i - 1] = ((a[i - 1] - '0') + d / 10) + '0';
                a[i] = (d % 10) + '0';
            }
        }
        if (a[0] > '9')
        {
            string k;
            k += a[0];
            a[0] = ((a[0] - '0') % 10) + '0';
            k[0] = ((k[0] - '0') / 10) + '0';
            a = k + a;
        }
        return a;
    }
    string multiplyStrings(string s1, string s2)
    {
        if(s1=="0"||s2=="0")return "0";
        
        bool neg = !((s1[0]!='-'&&s2[0]!='-')||(s1[0]=='-'&&s2[0]=='-'));
        if(s1[0]=='-')s1 = s1.substr(1);
        if(s2[0]=='-')s2 = s2.substr(1);
        string answer = "";
        vector<string> temp;
        //s1 is bigger
        if (s1 < s2)
        {
            string t = s1;
            s1 = s2;
            s2 = t;
        }
        int index1 = s1.length() - 1;
        int index2 = s2.length() - 1;
        for (int i = index2; i >= 0; i--)
        {
            temp.push_back(getString(s1, s2.substr(i, 1), index2 - i));
        }
        answer = "0";
        for (int i = 0; i < temp.size(); i++)
        {
            answer = doSum(answer,temp[i]);
        }
        if(neg)answer = "-"+answer;
        return answer;
    }
};
// { Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}  // } Driver Code Ends
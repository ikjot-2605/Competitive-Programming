// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
        vector<string> answer;
		void utility(string s,int fixed){
            if(fixed == s.size()-1){
                answer.push_back(s);
                return;
            }
            else{
                for(int i =fixed+1;i<s.size();i++){
                    swap(s[i],s[fixed+1]);
                    utility(s,fixed+1);
                }
            }
        }
        vector<string>find_permutation(string S)
		{
            sort(S.begin(),S.end());
            utility(S,-1);
            return answer;
        }
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends

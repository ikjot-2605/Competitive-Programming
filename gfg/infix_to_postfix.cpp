// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// The main function to convert infix expression
//to postfix expression
enum Type{Operator,Operand,Parantheses};
class Solution
{
    public:
    int precedence(char op){
        switch(op){
            case '-' : 0;
            case '+' : 1;
            case '*' : 2;
            case '/' : 3;
            case '^' : 4;
        }
    }
    string infixToPostfix(string s)
    {
        stack<char> sta;
        for(int i =0;i<s.length();i++){
            char curr_inp = s[i];
            Type currType;
            if(curr_inp=='+'||curr_inp=='-'||curr_inp=='*'||curr_inp=='/'||curr_inp=='^'){
                currType = Operator;
            }
            else if(curr_inp=='('||curr_inp == ')'){
                currType = Parantheses;
            }
            else{
                currType = Operand;
            }
            if(currType == Operand){
                cout<<curr_inp;
            }
            else if(currType==Parantheses){
                if(curr_inp==40){
                    sta.push(curr_inp);
                }
                else{
                    while(true){
                        if(!sta.empty()&&sta.top()!='('){
                            cout<<sta.top();
                            sta.pop();
                        }
                        else{
                            sta.pop();
                            break;
                        }
                    }
                }
            }
            else{
                if(sta.empty()||(!sta.empty()&&precedence(curr_inp)>precedence(sta.top()))){
                    sta.push(curr_inp);
                }
                else{
                    while(true){
                        if(sta.top()!='('&&precedence(sta.top())<=precedence(curr_inp)){
                            char c = sta.top();
                            sta.pop();
                            cout<<c;
                        }
                        else{
                            sta.push(curr_inp);
                            break;
                        }
                    }
                }
            }
        }
    }
};


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        Solution ob;
        cout<<ob.infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
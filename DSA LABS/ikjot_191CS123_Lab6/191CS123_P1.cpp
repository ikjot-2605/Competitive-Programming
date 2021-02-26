#include <bits/stdc++.h>

using namespace std;

class Stack
{
    int topp;

public:
    //int top; we dont want to allow the user to modify the top index
    char arr[1000];
    Stack()
    {
        topp = -1;
    }
    bool push(char value)
    {
        if (this->topp < 1000)
        {
            this->topp++;
            this->arr[this->topp] = value;
            return true;
        }
        else
        {
            cout << "The Stack is full, please ensure that something is popped, before you try to push again.\n";
            return false;
        }
    }
    char top()
    {
        if (this->topp >= 0)
        {
            return this->arr[this->topp];
        }
        else
        {
            cout << "Stack is empty. Push something before trying to pop.\n";
            return -1;
        }
    }
    char pop()
    {
        if (this->topp >= 0)
        {
            this->topp--;
            return this->arr[this->topp + 1];
        }
        else
        {
            return 0;
        }
    }
    void display()
    {
        if(this->topp==-1){
            cout<<"The stack is currently empty!\n";
            return;
        }
        cout<<"Shown below is the stack popped till it's empty.\n";
        while (this->topp >= 0)
        {
            cout << this->arr[this->topp] << " ";
            this->pop();
        }
    }
};

enum TokenType { Operand, Operator };


int precedence(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 
//since I'm not using global variable as a good practice, the following function returns a pair of strings
//that depict the 1)NextToken 2)remaining string
pair<string, string> getNextToken(string currState)
{
    //first string will be the next token, second string will be the new currString
    if (currState[0] >= 48 && currState[0] <= 57)
    {
        //number
        string temps;
        temps.push_back(currState[0]);
        int index = 1;
        while (currState[index] <= 57 && currState[index] >= 48)
        {
            temps.push_back(currState[index]);
            index++;
        }
        return {temps, currState.substr(index)};
    }
    else if (currState[0] == '+' || currState[0] == '-' || currState[0] == '*' || currState[0] == '/')
    {
        //operator
        string temps;
        temps.push_back(currState[0]);
        return {temps, currState.substr(1)};
    }
    else
    {
        string temps;
        temps.push_back(currState[0]);
        return {temps, currState.substr(1)};
    }
}

string infixToPostfix(string s)
{
    string temp = s;
    Stack aux;
    aux.push('~');
    string ans;
    while (temp.length() > 0)
    {
        pair<string, string> nextPart = getNextToken(temp);
        temp = nextPart.second;
        string nextToken = nextPart.first;
        TokenType type;
        if (nextToken[0] <= 57 && nextToken[0] >= 48)
        {
            type = Operand;
        }
        else
        {
            type = Operator;
        }
        if (type == Operator)
        {
            if (nextToken == "(")
            {
                aux.push(nextToken[0]);
            }
            else if (nextToken == ")")
            {
                while (aux.top() != '~' && aux.top() != '(')
                {
                    char c = aux.top();
                    aux.pop();
                    ans += c;
                    ans+=" ";
                }
                if (aux.top() == '(')
                {
                    char c = aux.top();
                    aux.pop();
                }
            }
            else
            {
                while (aux.top() != '~' && precedence(nextToken[0]) <=
                                              precedence(aux.top()))
                {
                    char c = aux.top();
                    aux.pop();
                    ans += c;
                    ans+= " ";
                }
                aux.push(nextToken[0]);
            }
        }
        else
        {
            ans.append(nextToken + " ");
        }
    }
    while(aux.top()!='~'){
        ans.push_back(aux.pop());
        ans.append(" ");
    }
    cout << "Below is the converted prefix expression: "<<endl;
    return ans;
}

string reverseInfix(string s){
    string temp = s;
    vector<string> ans;
    while(temp.length()>0){
        pair<string, string> nextPart = getNextToken(temp);
        temp = nextPart.second;
        string nextToken = nextPart.first;
        if(nextToken == "("){
            ans.push_back(")");
        }
        else if(nextToken == ")"){
            ans.push_back("(");
        }
        else{
            ans.push_back(nextToken);
        }
    }
    string returningAnswer;
    for(int i =ans.size()-1 ;i>=0;i--){
        returningAnswer+=ans[i];
    }
    return returningAnswer;
} 

string removeSpaces(string s) 
{ 
    int count = 0; 
    string ans;
    int n = s.length();
    for(int i = 0;i<n;i++){
        if(s[i]!=' '){
            ans.push_back(s[i]);
        }
    }
    return ans;
}

void infixToPrefix()
{
    cout << "Kindly enter the infix expression convert to prefix:\n";
    string s;
    cin.clear();
    cin.ignore(1,'\n');
    getline(cin,s);
    s = removeSpaces(s);
    s = reverseInfix(s);
    cout<<reverseInfix(infixToPostfix(s))<<endl;
}

int main()
{
    cout << "Welcome to the stacks program\n";
    Stack s;
    while (true)
    {
        int type;
        cout << "Press 0 to exit, 1 to convert infix to prefix.\nYour choice : ";
        cin >> type;
        if (type == 0)
        {
            cout << "Exiting.\n";
            break;
        }
        else if (type == 1)
        {
            infixToPrefix();
        }
    }
}
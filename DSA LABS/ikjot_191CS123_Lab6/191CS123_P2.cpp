//IMPORTANT
// PLEASE ENTER ALL TOKENS SEPARATED BY A SPACE
//IMPORTANT

#include <bits/stdc++.h>
#include<string>

using namespace std;

class Stack
{
    int topp;

public:
    //int top; we dont want to allow the user to modify the top index
    string arr[1000];
    Stack()
    {
        topp = -1;
    }
    bool push(string value)
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
    string top()
    {
        if (this->topp >= 0)
        {
            return this->arr[this->topp];
        }
        else
        {
            cout << "Stack is empty. Push something before trying to pop.\n";
            return NULL;
        }
    }
    string pop()
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
    int startIndex = 0;
    int endIndex;
    int space_position = currState.find(" ");
    endIndex = space_position-1;
    string after_space = currState.substr(space_position+1);
    string before_space = currState.substr(0,endIndex-startIndex+1);
    if(space_position == -1){
        after_space = "";
        before_space = currState;
    }
    else{
        after_space = currState.substr(space_position+1);
        before_space = currState.substr(0,endIndex-startIndex+1);
    }
    return {before_space,after_space};
}

void postfixToPrefix()
{
    cout << "Kindly enter the postfix expression convert to prefix:"<<endl;
    string s;
    cin.clear();
    cin.ignore(1,'\n');
    getline(cin,s);
    string temp = s;
    Stack aux;
    aux.push("~");
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
            string operator1 = aux.pop();
            string operator2 = aux.pop();
            string temporary = nextToken + " " + operator2 + " " + operator1;
            aux.push(temporary);
        }
        else
        {
            aux.push(nextToken);
        }
    }
    while(aux.top()!="~"){
        ans.append(aux.pop());
        ans.append(" ");
    }
    cout << "Below is the converted prefix expression: "<<endl;
    cout<<ans<<endl;
}

int main()
{
    cout << "Welcome to the stacks program\n";
    Stack s;
    while (true)
    {
        int type;
        cout << "Press 0 to exit, 1 to convert postfix to prefix.\nYour choice : ";
        cin >> type;
        if (type == 0)
        {
            cout << "Exiting.\n";
            break;
        }
        else if (type == 1)
        {
            postfixToPrefix();
        }
    }
}
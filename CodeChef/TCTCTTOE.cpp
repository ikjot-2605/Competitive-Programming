
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

bool hasXWon(char matrix[3][3], int x_count, int o_count)
{
    for (int i = 0; i < 3; i++)
    {
        if (matrix[i][0] == 'X' && matrix[i][1] == 'X' && matrix[i][2] == 'X')
        {
            return true;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (matrix[0][i] == 'X' && matrix[1][i] == 'X' && matrix[2][i] == 'X')
        {
            return true;
        }
    }
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
    {
        return true;
    }
    if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X')
    {
        return true;
    }
    return false;
}

bool hasOWon(char matrix[3][3], int x_count, int o_count)
{
    for (int i = 0; i < 3; i++)
    {
        if (matrix[i][0] == 'O' && matrix[i][1] == 'O' && matrix[i][2] == 'O')
        {
            return true;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (matrix[0][i] == 'O' && matrix[1][i] == 'O' && matrix[2][i] == 'O')
        {
            return true;
        }
    }
    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
    {
        return true;
    }
    if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O')
    {
        return true;
    }
    return false;
}

bool isReachable(char matrix[3][3], int x_count, int o_count)
{
        vector<string> board(3,"");
        for(int i =0;i<3;i++){
            for(int j = 0;j<3;j++){
                if(matrix[i][j]=='X')board[i].push_back('X');
                if(matrix[i][j]=='O')board[i].push_back('O');
                if(matrix[i][j]=='_')board[i].push_back(' ');
            }
        }
        int X_size=0, O_size=0;
    
    vector<vector<char>> chess (3, vector<char>(3, ' '));
    // build the chess board; 
    for (int i=0; i<board.size(); ++i) {
        string cur = board[i];
        for (int j=0; j<cur.length(); ++j) {
            if (cur[j] == 'X') {
                chess[i][j] = 'X';
                X_size++;
            } else if (cur[j] == 'O') {
                chess[i][j] = 'O';
                O_size++;
            }
        }
    }
    
    if (X_size < O_size || X_size > O_size + 1) return false;
    
    bool X_win = false, O_win = false;
    // check the row;
    for (int i=0; i<chess.size(); i++) {
        if (chess[i][0] != ' ' && chess[i][0]==chess[i][1] && chess[i][0]==chess[i][2]) {
            if (chess[i][0] == 'X') {
                X_win = true;  
            } else {
                O_win = true;
            }
        }
        
        if (X_win && O_win) return false;
    }
    
    // check the column
    for (int j=0; j<chess[0].size(); j++) {
        if (chess[0][j] != ' ' && chess[0][j]==chess[1][j] && chess[0][j]==chess[2][j]) {
            if (chess[0][j] == 'X') {
                X_win = true;  
            } else {
                O_win = true;
            }
        }
        if (X_win && O_win) return false;
    }
    
    // check the left diag
    if (chess[0][0] != ' ' && chess[0][0]==chess[1][1] && chess[0][0]==chess[2][2]) {
        if (chess[1][1] == 'X') {
            X_win = true;  
        } else {
            O_win = true;
        }
    }
    
    // check the right diag
    if (chess[0][2] != ' ' && chess[0][2]==chess[1][1] && chess[0][2]==chess[2][0]) {
        if (chess[1][1] == 'X') {
            X_win = true;  
        } else {
            O_win = true;
        }
    }
    
    if (X_size == O_size && X_win) return false;
    if (X_size == O_size+1 && O_win) return false;
    
    return true;
}

string convertMatrixToString(char matrix[3][3])
{
    string a;
    a.push_back(matrix[0][0]);
    a.push_back(matrix[0][1]);
    a.push_back(matrix[0][2]);
    a.push_back(matrix[1][0]);
    a.push_back(matrix[1][1]);
    a.push_back(matrix[1][2]);
    a.push_back(matrix[2][0]);
    a.push_back(matrix[2][1]);
    a.push_back(matrix[2][2]);
    return a;
}

bool isValid(char matrix[3][3], int x_count, int o_count)
{
    return isReachable(matrix, x_count, o_count);
}

bool canSomeoneWin(char matrix[3][3], int x_count, int o_count)
{
    bool isItXturn = (x_count == o_count) ? 1 : 0;
    if (hasXWon(matrix, x_count, o_count) || hasOWon(matrix, x_count, o_count))
    {
        return true;
    }
    else if (!isReachable(matrix, x_count, o_count))
    {
        return false;
    }
    else if(x_count+o_count==9)return false;
    else if (isValid(matrix, x_count, o_count))
    {

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (matrix[i][j] == '_')
                {
                    if (isItXturn)
                    {
                        matrix[i][j] = 'X';
                        if(canSomeoneWin(matrix, x_count + 1, o_count))return true;
                        else continue;
                    }
                    else
                    {
                        matrix[i][j] = 'O';
                        if(canSomeoneWin(matrix, x_count, o_count + 1)){
                            return true;
                        }
                        else continue;
                    }
                }
            }
        }
    }
    else
        return false;
    return false;
}

void solveA()
{
    char matrix[3][3];
    int x_count = 0;
    int o_count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 'X')
                x_count++;
            else if (matrix[i][j] == 'O')
                o_count++;
        }
    }
    if (!isReachable(matrix, x_count, o_count))
    {
        cout << 3 << endl;
        return;
    }
    if (hasXWon(matrix, x_count, o_count))
    {
        cout << 1 << endl;
        return;
    }
    if (hasOWon(matrix, x_count, o_count))
    {
        cout << 1 << endl;
        return;
    }
    if (!hasXWon(matrix, x_count, o_count) && !hasOWon(matrix, x_count, o_count) && x_count + o_count == 9)
    {
        cout << 1 << endl;
        return;
    }
    cout<<2<<endl;
    
}
void solveB()
{
}
void solveC()
{
}
void solveD()
{
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
    cin >> T;
    while (T--)
    {
        solveA();
    }

    return 0;
}

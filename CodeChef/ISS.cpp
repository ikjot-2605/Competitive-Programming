
/*COMPETITIVE PROGRAMMING C++ TEMPLATE */

#include<bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define MOD 998244353
const unsigned int M = 1000000007;
const long double PI = 3.141592653589793236L;

typedef long long int ll;
typedef long double ld;
#define MAX 50
using namespace std;

const int N_MAX_VAL = 4e6 + 5;
int values[N_MAX_VAL],A[N_MAX_VAL];
void preprocessing(){
    for(int i = 0;i<N_MAX_VAL;i++){
        values[i]=i;
    }
    for(int i = 2;i<N_MAX_VAL;i++){
        if(values[i]==i){
            values[i]=i-1;
            for(int j = 2*i;j<N_MAX_VAL;j+=i){
                values[j] = values[j]/i*(i-1);
            }
        }
    }
    for(int i =1;i<N_MAX_VAL;i++){
        A[i] += i-1;
        for(int j = 2*i;j<N_MAX_VAL;j+=i){
            A[j]+=(i*((1+values[j/i])/2));
        }
    }
}
void solveA()
{
    int k ;
    scanf("%d",&k);
    printf("%d\n",*(A+4*k+1));
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
    preprocessing();
    int T = 1;
    scanf("%d",&T);
    while (T--)
    {
        solveA();
    }

    return 0;
}


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

void solveA(){
        int n;
        cin>>n;
        vector<int> arr(n);
        int one_val = -1,two_val =-1;
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]!=arr[1]){
            if(arr[0]==arr[2]){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
            int val = arr[0];
            for(int i =0;i<n;i++){
                if(arr[i]!=val){cout<<1+i<<endl;return;}
            }
        }
        
    
}
void solveB(){
    int n;
    cin>>n;
    vector<vector<char>> matrix(n,vector<char>(n));
    vector<pair<int,int>> coordinates;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]=='*')coordinates.push_back({i,j});
        }
    }
    if(coordinates[0].first==coordinates[1].first){
        if(coordinates[0].first!=0){
            matrix[coordinates[0].first-1][coordinates[0].second]='*';
            matrix[coordinates[1].first-1][coordinates[1].second]='*';
        }
        else{
            matrix[coordinates[0].first+1][coordinates[0].second]='*';
            matrix[coordinates[1].first+1][coordinates[1].second]='*';
        }
    }
    else if(coordinates[0].second==coordinates[1].second){
        if(coordinates[0].second!=0){
            matrix[coordinates[0].first][coordinates[0].second-1]='*';
            matrix[coordinates[1].first][coordinates[1].second-1]='*';
        }
        else{
            matrix[coordinates[0].first][coordinates[0].second+1]='*';
            matrix[coordinates[1].first][coordinates[1].second+1]='*';
        }
    }
    else{
        pair<int,int> c1;
        pair<int,int> c2;
        if(coordinates[0].first>coordinates[1].first){
            c1=coordinates[0];
            c2=coordinates[1];
        }
        else{
            c1=coordinates[1];
            c2=coordinates[0];
        }
        matrix[c1.first][c2.second]='*';
        matrix[c2.first][c1.second]='*';
    }
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}
void solveC(){
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int n = a+b;

    for(int i =0;i<n/2;i++){
        if(s[i]==s[n-i-1]){
            if(s[i]=='0'){

            }
            else if(s[i]=='1'){

            }
            else{

            }
        }
        else if(s[i]!=s[n-i-1]&&s[i]!='?'&&s[n-i-1]!='?'){
            cout<<-1<<endl;
            return;
        }
        else{
            //one of them is a ?
            if(s[i]=='?')s[i]=s[n-i-1];
            else{s[n-i-1]=s[i];}
        }
    }
    int count1 = 0;
    int count0 = 0;
    for(int i =0 ;i<n;i++){
        if(s[i]=='0')count0++;
        else if(s[i]=='1'){count1++;}
    }
    for(int i =0;i<n;i++){
        if(a-count0>=2&&s[i]=='?'){
            s[i]='0';
            s[n-i-1]='0';
            count0+=2;
        }
        else if(b-count1>=2&&s[i]=='?'){
            s[i]='1';
            s[n-i-1]='1';
            count1+=2;
        }
    }
    if(n%2==1){
        if(b-count1==1&&a==count0){
            for(int i = 0;i<n;i++){
                if(s[i]=='?')s[i]='1';
            }
            cout<<s<<endl;return;
        }
        else if(a-count0==1&&b==count1){
            for(int i = 0;i<n;i++){
                if(s[i]=='?')s[i]='0';
            }
            cout<<s<<endl;return;
        }
        else if(a==count0&&b==count1){
            cout<<s<<endl;return;
        }
        else{
            cout<<-1<<endl;return;
        }
    }
    else{
        if(a==count0&&b==count1){
            cout<<s<<endl;return;
        }
        else{
            cout<<-1<<endl;return;
        }
    }
}
void solveD(){
       ll n;
       cin>>n;
       vector<ll> b(n+2);
       
       for(int i=0;i<n+2;i++)
       {
           cin>>b[i];
       }
       
       multiset<ll> m(b.begin(),b.end());
       
       ll sum=0;
       for(ll i=0;i<n+2;i++)
       {
           sum+=b[i];
       }
       
       multiset<ll> :: iterator it=m.begin();
       for(auto it:b)
       {
           ll x=it;
           m.erase(m.find(x));
           sum-=x;
           
           if(sum%2==0 && m.find(sum/2)!=m.end())
           {
               m.erase(m.find(sum/2));
               for(auto res:m)
               {
                   cout<<res<<" ";
               }
               cout<<endl;
               return;
           }
           
           sum+=x;
           m.insert(x);
       }
       
       cout<<"-1"<<endl;
}
void solveE(){

}
void solveF(){

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solveD();
    }

    return 0;
}

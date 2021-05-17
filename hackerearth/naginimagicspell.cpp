
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

// void solve()
// {
//    int n,k;
//    cin>>n>>k;
//    string s;
//    cin>>s;
//    vector<int> start0indices;
//    bool started=0;
//    for(int i=0;i<n;i++){
//        if(s[i]=='0'&&!started){
//            started=true;
//            start0indices.push_back(i);
//        }
//        if(started&&s[i]=='1'){
//            started=false;
//        }
//    }
//    int max1started=0;
//    int started1=0;
//    int counter=0;
//    string checker=s;
//    for(int i=0;i<start0indices.size();i++){
//        s=checker;
//        for(int j=start0indices[i];j<k+start0indices[i]&&j<n;j++){
//            s[j]='1';
//        }
       
//        started1=0;
//        counter=0;
//        for(int j=0;j<n;j++){
//            if(started1==0&&s[j]=='1'){
//                started1=1;
//                counter++;
//            }
//            else if(s[j]=='1'){
//                counter++;
//            }
//            else if(started1==1&&s[j]=='0'){started1==0;if(max1started<counter)max1started=counter;}
           
//        }
//    }
//    if(max1started<counter)max1started=counter;
//    cout<<max1started; 
// }
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string constant = s;
    vector<vector<char>> getfull;
    vector<char> toput;
    int curr;
    int prev=s[0];
    for(int i=0;i<n;i++){
        curr=s[i];
        if(curr==prev){
            toput.push_back(s[i]);
        }
        else {
            getfull.push_back(toput);
            toput={s[i]};
        }
        prev=s[i];
    }
    getfull.push_back(toput);
    int maximum=0;
    for(int i=0;i<getfull.size()-1;i++){
        int current=0;
        int checker=0;
        char whichone=getfull[i][0];
        if(whichone=='1'){
            checker=0;
            int j=0;
            while(checker<k&&i+j+1<getfull.size()){
                if(getfull[i+j+1].size()+checker<k){
                    checker=getfull[i+j+1].size()+checker;
                }
                else if (getfull[i+j+1].size()+checker==k){
                    checker=getfull[i+j+1].size()+checker;
                    if(i+j+2<getfull.size()&&getfull[i+j+2][0]=='1')checker+=getfull[i+j+2].size();
                }
                else{
                    if(getfull[i+j+1][0]=='1'){
                        checker+=getfull[i+j+1].size();
                    }
                    else{
                        checker=k;
                    }
                }
                j++;
            }
            if(checker<k&&i+j+1>=getfull.size()){
                continue;
            }
        }
        else{continue;}
        if(maximum<checker+getfull[i].size()){maximum=checker+getfull[i].size();}
    }
    reverse(getfull.begin(),getfull.end());
    for(int i=0;i<getfull.size()-1;i++){
        int current=0;
        int checker=0;
        char whichone=getfull[i][0];
        if(whichone=='1'){
            checker=0;
            int j=0;
            while(checker<k&&i+j+1<getfull.size()){
                if(getfull[i+j+1].size()+checker<k){
                    checker=getfull[i+j+1].size()+checker;
                }
                else if (getfull[i+j+1].size()+checker==k){
                    checker=getfull[i+j+1].size()+checker;
                    if(i+j+2<getfull.size()&&getfull[i+j+2][0]=='1')checker+=getfull[i+j+2].size();
                }
                else{
                    if(getfull[i+j+1][0]=='1'){
                        checker+=getfull[i+j+1].size();
                    }
                    else{
                        checker=k;
                    }
                }
                j++;
            }
            if(checker<k&&i+j+1>=getfull.size()){
                continue;
            }
        }
        else{continue;}
        if(maximum<checker+getfull[i].size()){maximum=checker+getfull[i].size();}
    }
    cout<<maximum<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <iostream>
#include<stack>
#include<queue>

#define ll long long int
#define all(x) x.begin(), x.end()
#define MOD 1000000007


using namespace std;
map<string,int> marks;
void solve()
{

    int type,marks_toadd;
    string name;
    cin >> type;
    if(type==1){
        cin >> name;
        if(marks.find(name)!=marks.end()){
            //exists
            cin >> marks_toadd;
            marks[name]+=marks_toadd;
        }
        else{
            cin >> marks_toadd;
            marks.insert(make_pair(name,marks_toadd));
        }
    }
    if(type==2){
        cin >>name;
        marks[name]=0;
    }
    if(type==3){
        cin >>name;
        if(marks.find(name)!=marks.end()){
            cout << marks[name] << endl;

        }
        else{
            cout << "0"<<endl;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
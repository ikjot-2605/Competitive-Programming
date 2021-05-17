#include<bits/stdc++.h>
#define ll long long
using namespace std;
void apr10a(){
    int n;
    cin >> n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        cin >> arr[i][0];
        cin >> arr[i][1];


    }
    int c_prev,c_now,p_prev,p_now;
    c_prev=arr[0][1];
    p_prev=arr[0][0];
    if(c_prev>p_prev){cout << "NO" << endl;return;}
    int flag=0;
    for(int i=1;i<n;i++){
        c_now=arr[i][1];
        p_now=arr[i][0];
        if(c_prev>p_prev||c_now>p_now){flag=1;c_prev=c_now;
        p_prev=p_now;break;}
        if(p_now<p_prev){flag=1;c_prev=c_now;
        p_prev=p_now;break;}
        if(c_now<c_prev){flag=1;c_prev=c_now;
        p_prev=p_now;break;}
        if(c_now-c_prev>p_now-p_prev){flag=1;c_prev=c_now;
        p_prev=p_now;break;}
        c_prev=c_now;
        p_prev=p_now;
    }
    if(flag==1)cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-->0){apr10a();}
    return 0;

}

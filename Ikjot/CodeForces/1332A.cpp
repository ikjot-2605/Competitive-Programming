#include <bits/stdc++.h>
#define ll long long
using namespace std;
void mar31_a(){
    ll left , right, down, up,x, y, x1, y1, x2, y2 ;
    cin >> left>> right>>down>>up>>x>>y>>x1>>y1>>x2>>y2;
    if((left>0||right>0||up>0||right>0)&&x1==x2&&y1==y2)cout << "NO" <<endl;
    else if((up>0||down>0)&&y1==y2){
        cout << "NO" <<endl;
    }
    else if((right>0||left>0)&&x1==x2){
        cout << "NO" <<endl;
    }
    else if(x<x1||x>x2||y<y1||y>y2){
        cout << "NO" <<endl;
    }
    else{
        if(up>=down&&right>=left){
            if(up-down<=y2-y&&right-left<=x2-x)cout << "YES" <<endl;
            else cout << "NO" <<endl;
        }
        else if(up<=down&&right<=left){
            if(down-up<=y-y1&&left-right<=x-x1)cout << "YES" <<endl;
            else cout << "NO" <<endl;
        }
        else if(up>=down&&right<=left){
            if(up-down<=y2-y&&left-right<=x-x1)cout << "YES" <<endl;
            else cout << "NO" <<endl;
        }
        else if(up<=down&&right>=left){
            if(down-up<=y-y1&&right-left<=x2-x)cout << "YES" <<endl;
            else cout << "NO" <<endl;
        }

    }
}
int main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int T;
	cin >> T;
	while(T--){
		mar31_a();
	}

	return 0;
}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	// code starts from here
	int N, K;
	cin >> N >> K;

	string str;
	cin >> str;

	vector<int> freq(26,0);
	for(int i= 0; i < N; i++){
		freq[str[i]-'a']++;
	}
	for(int i= 0; i < 26; i++){
		if(freq[i]%2 == 1 || freq[i]/2 > K){
			cout << "NO" << endl;
			return ;
		}
	}
	cout << "YES" << endl;
	return;
}

int main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int T;
	cin >> T;
	while(T--){
		solve();
	}

	return 0;
}

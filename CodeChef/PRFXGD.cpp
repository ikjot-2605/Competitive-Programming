
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t-->0){
        string str;
        cin >> str;
        int k,x;
        cin >> k >> x;
        int arr[150]={0};
        int count=0;
        int ans=0;
        int flag=0;
        for(int i=0;i<str.size();i++){
            if(arr[str.at(i)]>=x&&count>=k){cout << ans<< endl;flag=1; break;}
            else if(arr[str.at(i)]==x&&count<k){count++;arr[str.at(i)]=x;}
            else{arr[str.at(i)]++;ans++;}



        }
        if(flag==0){cout << ans <<endl;}

    }
}

#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int found=0;
        for(int i=0;i<n;i++){
            int first=arr[i];
            for(int j=i+2;j<n;j++){
                int now=arr[j];
                if(now==first){found=1;break;}
            }
            if(found==1)break;
        }
        if (found==1)cout << "YES" <<endl;
        else cout << "NO" <<endl;
    }
}

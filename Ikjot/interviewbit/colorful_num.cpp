#include<bits/stdc++.h>
using namespace std;
int colorful(int A){
    set<int> found;
    int temp = A;
    int n = 0;
    vector<int> vals;
    while(temp>0){
        vals.insert(vals.begin(),temp%10);
        temp/=10;
        n++;
    }
    for(int i =0 ;i<n;i++){
        if(found.find(vals[i])!=found.end()){
            return 0;
        }
        else{
            found.insert(vals[i]);
        }
        int curr_prod = vals[i];
        if(i==n-1)continue;
        for(int j = i+1 ;j<n;j++){
            curr_prod *= vals[j];
            if(found.find(curr_prod)!=found.end()){
            return 0;
            }
            else{
                found.insert(curr_prod);
            }
        }   
    }
    return 1;
}
int main(){
    cout<<colorful(236)<<endl;
}
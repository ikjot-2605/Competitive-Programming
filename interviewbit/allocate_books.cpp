#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int> &P, int M, int thresold){
    int n = P.size();
    int k = 1, pages=0;

    for(int i=0; i<n; i++){
        pages += P[i];
        if(pages > thresold){
            pages = 0;
            k += 1;
            i -= 1;
            if(k > M){
                return false;
            }
        }
    }
    return true;
}

int books(vector<int> &P, int M) {
    if(M>P.size()) return -1;
    int l=0,r=0,ans=-1,n=P.size(); 
    for(int i=0;i<P.size();i++)
        r += P[i];
        
    while(l<=r){
        int mid = (l+r)/2; 
        
        if(possible(P,M,mid)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> temp = {73, 58, 30, 72, 44, 78, 23, 9};
    cout<<books(temp,5);
}
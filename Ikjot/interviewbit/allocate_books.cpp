#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int> &A, int B, int thresold){
    int n = A.size();
    int k = 1, pages=0;

    for(int i=0; i<n; i++){
        pages += A[i];
        if(pages > thresold){
            pages = 0;
            k += 1;
            i -= 1;
            if(k > B){
                return false;
            }
        }
    }
    return true;
}

int books(vector<int> &A, int B) {
    if(B>A.size()) return -1;
    int l=0,r=0,ans=-1,n=A.size(); 
    for(int i=0;i<A.size();i++)
        r += A[i];
        
    while(l<=r){
        int mid = (l+r)/2; 
        
        if(possible(A,B,mid)){
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
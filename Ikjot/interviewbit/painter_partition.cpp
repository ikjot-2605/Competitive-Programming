#include<bits/stdc++.h>
using namespace std;
#define MODULUS 10000003
bool possible(int A,int B, vector<int> C,int curr_max_units){
    int num_painters = A;
    int count = 0;
    int curr_value = 0;
    for(int i =0;i<C.size();i++){
        if(curr_value+C[i]<curr_max_units){
            curr_value += C[i];
        }
        else{
            curr_value = C[i];
            count++;
        }
    }
    if(curr_value!=0){
        count++;
    }
    if(count<=A){
        return true;
    }
    return false;
}

int paint(int A, int B, vector<int> &C) {
    int n = C.size();
    int total_sum = 0;
    int max_val = INT_MIN;
    for(int i =0;i<n;i++){
        if(C[i]>max_val){
            max_val=C[i];
        }
        total_sum+=C[i];
    }
    int l = max_val;
    int r = total_sum;
    while(l<r){
        int middle = l+ (r-l)/2;
        if(possible(A,B,C,middle)){
            r = middle;
        }
        else{
            l=middle+1;
        }
    }
    int final_ans = 0;
    long long curr_vals = 0;
    long long max_possible = INT_MIN;
    for(int i = 0;i<n;i++){
        if(curr_vals+C[i]<=l){
            curr_vals+=C[i];
        }
        else{
            max_possible=max(max_possible,curr_vals);
            curr_vals=C[i];
        }
    }
    max_possible = max(max_possible,curr_vals);
    // for(int i = 0;i<B;i++){
    //     max_possible=((max_possible)%MODULUS+(max_possible)%MODULUS)%MODULUS;
    // }
    return (max_possible*B)%MODULUS;
}

int main(){
    vector<int> temp = {1000000,1000000};
    cout<<paint(1,1000000,temp);
    cout<<((long long)2000000*(long long)1000000)%(long long)MODULUS;
}
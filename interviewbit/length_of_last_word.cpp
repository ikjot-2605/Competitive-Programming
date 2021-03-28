#include<bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string A){
    int index = -1;
    int check =0 ;
    for(int i =0;i<A.size();i++){
        if(A[i]!=' '){
            check = 1;
            break;
        }
    }
    if(check ==0)return 0;
    if(A[A.size()-1]==' '){
        int end_spaces = 0;
        int temp = A.size()-1;
        int second_last = 0;
        while(A[temp]==' '){
            temp--;
            end_spaces++;
        }
        while(A[temp]!=' '){
            temp--;
        }
        second_last = temp;
        if(second_last<0)second_last = -1;
        return A.size()-1-second_last-end_spaces;
    }
    for(int i =0;i<A.size();i++){
        if(A[i]==' '){
            index = i;
        }
    }
    if(index!=-1)
    return A.size()-index-1;
    else
    return A.size();
}
int main(){
    string A;
    cin>>A;
    cout<<lengthOfLastWord(A);
}
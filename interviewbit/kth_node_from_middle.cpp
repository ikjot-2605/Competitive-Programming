#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
int solve(ListNode* A, int B) {
    int length_of_list = 0;
    ListNode *temp = A;
    vector<ListNode*> hold;
    while(temp!=NULL){
        length_of_list++;
        hold.push_back(temp);
        temp=temp->next;
    }
    if(length_of_list/2+1 <=B){
        return -1;
    }
    else{
        return hold[length_of_list/2]->val;
    }
}

int main(){
    
}
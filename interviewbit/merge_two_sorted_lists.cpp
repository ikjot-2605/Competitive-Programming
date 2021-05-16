
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next() {}
  };
 
ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *answer  = new ListNode(1);
    ListNode *start = answer;
    while(A||B){
        if((A&&B&&A->val>B->val)||(!A)){
            start->next = B;
            start = start->next;
            B = B->next;
        }
        else if((A&&B&&A->val<B->val)||(!B)){
            start->next = A;
            start = start->next;
            A = A->next;
        }
        else{
            start->next = A;
            start = start->next;
            A = A->next;
        }
    }
    return answer->next;
}

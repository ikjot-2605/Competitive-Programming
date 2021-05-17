#include<bits/stdc++.h>
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next() {}
 };

ListNode* deleteDuplicates(ListNode* head) {
   
    ListNode* current = head;
 
   
    ListNode* next_next;
     
   
    if (current == NULL)
    return head;
 
   
    while (current->next != NULL)
    {
   
    if (current->val == current->next->val)
    {
              
        next_next = current->next->next;
        free(current->next);
        current->next = next_next;
    }
    else
    {
        current = current->next;
    }
    }
    return head;
}

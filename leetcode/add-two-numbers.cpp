/*COMPETITIVE PROGRAMMING C++ TEMPLATE */

#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <iostream>
#include <stack>
#include <queue>
#include <climits>
#include <iomanip>
#include <iterator>

#define along long(x) x.begin(), x.end()
#define MOD 998244353
const unsigned long long M = 1000000007;
const long double PI = 3.141592653589793236L;

typedef long long ll;
typedef long double ld;
#define MAX 50
using namespace std;
class ListNode { 
public: 
    long long val; 
    ListNode* next; 
}; 
int getCount(ListNode* head)  
{  
    int count = 0;   
    ListNode* current = head;   
    while (current != NULL)  
    {  
        count++;  
        current = current->next;  
    }  
    return count;  
}  
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode();
        int carry=0;
        int length1=getCount(l1);

        int length2=getCount(l2);
        int remaining=max(length1,length2)-min(length1,length2);
        ListNode* start=ans;
        
        for(int i=0;i<min(length1,length2);i++){
            ans->val=(l1->val+l2->val+carry)%10;
            ans->next=new ListNode();
            carry=((l1->val+l2->val+carry)-ans->val)/10;
            ans=ans->next;
            l1=l1->next;
            l2=l2->next;
        }
        ans=NULL;
        return start;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ListNode* l1=new ListNode();
    ListNode* l2=new ListNode();
    l2->val=3;
    l2->next=new ListNode();
    l2->next->val=4;
    l1->val=5;
    l1->next=new ListNode();
    l1->next->val=7;
    ListNode * answer=addTwoNumbers(l1,l2);
    while(answer!=NULL){
        cout<<answer->val;
        answer=answer->next;
    }
    cout<<endl;
}
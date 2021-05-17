
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

#define all(x) x.begin(), x.end()
#define MOD 998244353
const unsigned int M = 1000000007;
const long double PI = 3.141592653589793236L;

typedef long long int ll;
typedef long double ld;
#define MAX 50
 int count_zeroes=0;
 int count_ones = 0;

using namespace std;
struct ListNode{
  int data;
  struct ListNode* next;
};


ListNode* solve(ListNode* A) {
    ListNode* temp=A;
    while(temp->next!=NULL)
    {
        if(temp->next->data==0)
        {
            ListNode* temp1=temp->next;
            temp->next=temp1->next;
            temp1->next=A;
            A=temp1;
            if(temp->next!=NULL && temp->next->data==1) temp=temp->next;
        }
        else temp=temp->next;
    }
    return A;
}

void solveA()
{
     struct ListNode *head = (struct ListNode*)malloc(sizeof(struct ListNode));
     head->data = 1;
     struct ListNode *result = solve(head);
     while(result!=NULL){
       cout<<result->data;
       cout<<" ";
       result=result->next;
     }
     cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solveA();
    }

    return 0;
}

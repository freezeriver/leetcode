#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans =(ListNode*)malloc(sizeof(ListNode));
        ListNode* p =ans;
        ListNode* x1=l1;
        ListNode* x2=l2;
        while(x1&&x2){
            ListNode* tmp=(ListNode*)malloc(sizeof(ListNode));
            if(x1->val<=x2->val){
                tmp->val=x1->val;
                x1=x1->next;
            }
            else{
                tmp->val=x2->val;
                x2=x2->next;
            }
            p->next=tmp;
            p=tmp;
        }
        while(x1){
            ListNode* tmp=(ListNode*)malloc(sizeof(ListNode));
            tmp->val=x1->val;
            x1=x1->next;
            p->next=tmp;
            p=tmp;
        }
        while(x2){
            ListNode* tmp=(ListNode*)malloc(sizeof(ListNode));
            tmp->val=x2->val;
            x2=x2->next;
            p->next=tmp;
            p=tmp;
        }
        p->next=NULL;
        return ans->next;
    }
};


int main()
{

    return 0;
}

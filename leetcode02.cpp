#include <iostream>
#include <cstdio>
#include <cstdlib>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p=l1;                                         //p,q�ֱ������ƶ�l1��l2
        ListNode* q=l2;
        ListNode* r=(ListNode*)malloc(sizeof(ListNode));        //r�Ǵ�����ͷָ�룬s�����ƶ�����
        ListNode* s=r;
        int cy=0;
        while(p&&q){                                            //���߶���Ϊ��ʱ
            ListNode* tmp=(ListNode*)malloc(sizeof(ListNode));
            tmp->val=(p->val+q->val+cy)%10;
            cy=(p->val+q->val+cy)/10;
            s->next=tmp;
            s=tmp;
            p=p->next;
            q=q->next;
        }
        while(p){
            ListNode* tmp=(ListNode*)malloc(sizeof(ListNode));
            tmp->val=(p->val+cy)%10;
            cy=(p->val+cy)/10;
            s->next=tmp;
            s=tmp;
            p=p->next;
        }
        while(q){
            ListNode* tmp=(ListNode*)malloc(sizeof(ListNode));
            tmp->val=(q->val+cy)%10;
            cy=(q->val+cy)/10;
            s->next=tmp;
            s=tmp;
            q=q->next;
        }
        if(cy){                                                 //��������һλ�Ƿ��λ
            ListNode* tmp=(ListNode*)malloc(sizeof(ListNode));
            tmp->val=cy;
            s->next=tmp;
            s=tmp;
        }
        s->next=NULL;                                           //�������������ָ����NULL������Ϊ���һֱCE������
        return r->next;

    }
};

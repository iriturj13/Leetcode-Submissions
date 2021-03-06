/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *p=head,*q=head ;
        while(q&&q->next)
        {
            p=p->next;
            q=q->next->next;
        }return p;
        
        /*int count=-1;
        while(p)
        {
            count++;
            p=p->next;
        } p= head;
        for(int i=0;i<count/2;i++)
        {
            p=p->next;
        }return p; */
    }
};
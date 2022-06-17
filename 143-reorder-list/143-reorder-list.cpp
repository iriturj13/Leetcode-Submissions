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
    void reorderList(ListNode* head) {
  //base case i.e if the linked list has zero,one or two elments just return it
        if(!head || !head->next || !head->next->next) return;
        
        //Find the secondLast node i.e second last node of the linkedlist
        ListNode* secondLast = head;
        while (secondLast->next->next) secondLast = secondLast->next;
        
        // Link the secondLast with the second element
        secondLast->next->next = head->next;
        head->next = secondLast->next;
        
        //Again set the secondLast to the the last 
        secondLast->next = NULL;
        
        // Do the above steps rcursive
        reorderList(head->next->next);
        
        
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val; // Store the next elements data into current node
        
		ListNode *temp = node->next; // Mark the next node
        
		node->next = node->next->next; // Remove the next node from the list by linking current node to next next.
        // No need to worry about runtime error or other errors in the above line. Node to be deleted is never the last node. It's given in the question itself.
		
		delete temp; // Delete next node
        
        
        
    }
};
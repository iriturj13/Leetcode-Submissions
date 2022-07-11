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
    bool isPalindrome(ListNode* head) {
          vector<int> vec;
        
        ListNode *curr = head;
        
        while(curr!=NULL){
            vec.push_back(curr->val);
            curr = curr->next;
        }
        
        int low = 0,high = vec.size()-1;
        
        while(low<=high){
            
            if(vec[low] != vec[high]){
                return false;
            }else{
                low++;
                high--;
            }
        }
        return true;
    }
};
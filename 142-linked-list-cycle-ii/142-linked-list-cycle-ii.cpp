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
    ListNode *detectCycle(ListNode *head) {
        
       if(!head || !head->next)return NULL;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        ListNode* temp = head;      
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast){
                slow = head;
                break;
            }
        }
        if(slow != head)return NULL;
        while(slow != fast){
            // if(slow == fast)return slow;
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};
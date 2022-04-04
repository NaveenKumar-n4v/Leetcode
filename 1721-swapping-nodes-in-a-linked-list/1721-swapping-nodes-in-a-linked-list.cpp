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
    ListNode* swapNodes(ListNode* head, int k) {
        
    
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = head;
        int counter =1;
        
        while(temp){
            if(counter<k){
                slow = slow->next;
            }
            else if (counter>k){
                fast = fast->next;
            }
            counter++;
            temp = temp->next;
        }
        cout<<slow->val<<" "<<fast->val;
        int t;
        t = slow->val;
        slow->val = fast->val;
        fast->val = t;
        
        return head;
    }
};
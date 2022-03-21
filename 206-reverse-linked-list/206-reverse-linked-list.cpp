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
    ListNode* reverseList(ListNode* head) {
        /*
        TC - O(N) No of Nodes
        SC - O(1) No Extra Space Except 1 Ptr
        */
       ListNode* dummy=NULL;
        while(head){
            ListNode* nextNode = head->next;
            // head->next is pointer pointing to current next value 
            // So we make them swift to dummy node for reversal
            head->next=dummy;
            
            dummy = head;
            head = nextNode;
        }
        return dummy;
        
    }
};
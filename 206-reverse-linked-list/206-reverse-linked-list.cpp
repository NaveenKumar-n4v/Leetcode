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
        SC - O(1) No Extra Space Except 3 Ptr
        */
       ListNode* dummy=NULL;
        while(head){
            ListNode* nextNode = head->next;
            head->next=dummy;
            
            dummy = head;
            head = nextNode;
        }
        return dummy;
        
    }
};
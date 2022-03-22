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
        
        //Brute
        ListNode* brute;
        while(node->next != NULL){
            brute = node;
            node->val = node->next->val;
            node = node->next;
        }
        brute->next = NULL;     
    }
};
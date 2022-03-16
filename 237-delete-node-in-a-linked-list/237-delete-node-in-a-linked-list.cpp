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
        ListNode* val;
    while(node->next!=NULL){
        val = node;
        node->val = node->next->val;
        node = node->next;
    }
    val->next=NULL;
    }
};
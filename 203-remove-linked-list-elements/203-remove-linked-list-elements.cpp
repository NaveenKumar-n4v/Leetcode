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
    ListNode* removeElements(ListNode* ptr, int val) {
        ListNode* head = ptr;
        ListNode* nw =ptr;
        if(nw==NULL)return NULL;
        while(nw!=NULL && nw->val==val){
            nw = nw->next;
        }
        while(head!=NULL && head->next !=NULL){
            if(head->next->val == val){
                head->next=head->next->next;
            }
            else
                head = head->next;
        }
        return nw;   
    }
};
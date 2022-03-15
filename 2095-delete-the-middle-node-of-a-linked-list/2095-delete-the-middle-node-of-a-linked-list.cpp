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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head==NULL || head->next == NULL )
            return NULL;
        ListNode* p1 = head;
        ListNode* p2 = head;
        ListNode* ptr;
        while(p2 != NULL && p2->next !=NULL ){
            p2= p2->next->next;
            ptr = p1;
            p1= p1->next;
        }
        // cout<<ptr->val<<endl;
        ptr->next = ptr->next->next;
        return head;
        
        
        
        
    }
};
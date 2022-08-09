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
    ListNode* deleteDuplicates(ListNode* head) {
        /*
        
        Input: head = [1,2,3,3,4,4,5]
        Output: [1,2,5]
        
        */
        
//         ListNode* prevTemp = ListNode(0, head);
//         ListNode* temp = prevTemp;
//         while( head != NULL ){
//             if(temp->val == temp->next->val){
//                 prevTemp->next = prevTemp->next->next->next;
//                 temp->next = temp->next->next;
//             }
//             else{
//                 temp = temp->next;
//                 prevTemp = prevTemp->next;
//             }
//         }
//         return head;
        
        
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        
        while(head != NULL){
            if(head->next != NULL && head->val == head->next->val){
                while(head->next != NULL && head->val == head->next->val){
                    
                    //move head till last pt
                    head = head->next;
                    //place at the last next pos
                    prev->next = head->next;
                    
                }
            }
            else{
                prev = prev->next;
            }
            head = head->next;
        }
        return dummy->next;
    }
};
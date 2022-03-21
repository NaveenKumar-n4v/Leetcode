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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        ListNode* dummy=list1;
        if(list1->val > list2->val){
            dummy = list2;
            list2=list2->next;
        }
        else{
            
            list1=list1->next;
        }
        ListNode* dummy2=dummy;
        while(list1 &&  list2){
            if(list1->val < list2->val){
                dummy2->next=list1;
                list1=list1->next;
                
            }
            else{
                dummy2->next = list2;
                list2=list2->next;
            }
            dummy2 = dummy2->next;
        }
        if(!list1){
            dummy2->next=list2;
        }
        else
            dummy2->next=list1;
        
        return dummy;
    }
};
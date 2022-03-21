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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l2==NULL)return l1;
        if(l1==NULL)return l2;
        
        //for first check
        ListNode* ptr1 =l1;
        if(l1->val > l2->val){
            ptr1=l2;
            l2=l2->next;            
        }
        else
            l1 = l1->next;
        
        ListNode* ptr2=ptr1;
        while(l2 && l1){
            if(l2->val > l1->val){
                ptr2->next=l1;
                l1 = l1->next;
            }
            else{
                ptr2->next = l2;
                l2 = l2->next;
            }
            ptr2=ptr2->next;
        }
        if(!l2){
            ptr2->next=l1;
        }
        else
            ptr2->next=l2;
        return ptr1;
    }
};
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if(list1==NULL){
//             return list2;
//         }
//         if(list2==NULL){
//             return list1;
//         }
//         ListNode* dummy=list1;
//         if(list1->val > list2->val){
//             dummy = list2;
//             list2=list2->next;
//         }
//         else{
            
//             list1=list1->next;
//         }
//         ListNode* dummy2=dummy;
//         while(list1 &&  list2){
//             if(list1->val < list2->val){
//                 dummy2->next=list1;
//                 list1=list1->next;
                
//             }
//             else{
//                 dummy2->next = list2;
//                 list2=list2->next;
//             }
//             dummy2 = dummy2->next;
//         }
//         if(!list1){
//             dummy2->next=list2;
//         }
//         else
//             dummy2->next=list1;
        
//         return dummy;
//     }
// };
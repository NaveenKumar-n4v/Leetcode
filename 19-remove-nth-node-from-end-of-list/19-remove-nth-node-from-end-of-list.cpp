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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        //BRUTE WITH LOT AND LOTS OFF ****** EDGE CASES
        // O(N) + O(N)
        // if(head->next==NULL)return NULL;
        // if(head->next->next == NULL){
        //     if(n==1){
        //         head->next=NULL;
        //         return head;
        //     }
        //     else
        //         return head->next;
        // }
        // int count=0;
        // ListNode* nx = head;
        // while(nx!= NULL){
        //     nx = nx->next;
        //     count++;
        // }
        // int to_del = count - n;
        // // cout<<to_del;
        // ListNode* mx = head;
        // int newCount=0;
        // first node
        // if(n==count)return head->next;
        // while(mx !=NULL){
        //     if(newCount == to_del-1){
        //         if(mx->next->next !=NULL)
        //         mx->next=mx->next->next;
        //         else
        //             mx->next = NULL;
        //     }
        //     mx=mx->next;
        //     newCount++;
        // }
        // return head;
        
        
        
        //Optimal
        // O(N)at max N
        ListNode* dummy = new ListNode();
        dummy->next =head;
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        while(n--){
            fast = fast->next;
        }
        while(fast->next != NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next = slow->next->next;
        return dummy->next;
        
        
    }
};
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
        if(head->next==NULL)return NULL;
        if(head->next->next == NULL){
            if(n==1){
                head->next=NULL;
                return head;
            }
            else
                return head->next;
        }
        int count=0;
        ListNode* nx = head;
        while(nx!= NULL){
            nx = nx->next;
            count++;
        }
        int to_del = count - n;
        // cout<<to_del;
        ListNode* mx = head;
        int newCount=0;
        if(n==count)return head->next;
        while(mx !=NULL){
            if(newCount == to_del-1){
                if(mx->next->next !=NULL)
                mx->next=mx->next->next;
                else
                    mx->next = NULL;
            }
            mx=mx->next;
            newCount++;
        }
        return head;
    }
};
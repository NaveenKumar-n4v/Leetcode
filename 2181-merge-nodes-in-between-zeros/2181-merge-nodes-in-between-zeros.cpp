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
    ListNode* mergeNodes(ListNode* head) {
        head=head->next;
        ListNode* main=head;
        while(main){
            ListNode* sub=main;
            int sum=0;
            while(sub->val!=0){
                sum +=sub->val;
                sub = sub->next;
            }
            main->val=sum;
            main->next=sub->next;
            main = main->next;
        }
        return head;
    }
};
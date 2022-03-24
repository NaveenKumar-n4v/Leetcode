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
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        
        while(h2){
            ListNode* res = h1;
            while(res){
                if(res == h2){
                    return h2;
                }
                res = res->next;
            }
            h2 = h2->next;
        }
        return NULL;
    }
};
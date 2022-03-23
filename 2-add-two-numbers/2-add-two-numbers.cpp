
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        
        int carry =0;
        ListNode* dummy = res;
        while(l1 != NULL || l2 !=NULL||carry){
            int count =0;
            if(l1 != NULL){
            count += l1->val;
            l1 = l1->next;
            }
            if(l2 != NULL){
            count += l2->val;
            l2 = l2->next;
            }
            count+=carry;
            carry = count/10;
            dummy->next = new ListNode(count%10);
            dummy = dummy->next;
        }
        return res->next;
        
        
    }
};
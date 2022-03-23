
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Brute and optimal
        // TC O(Max(n2,n2))
        // SC O(N)
        
        ListNode* res = new ListNode(0);
        int carry =0;
        ListNode* dummy = res;
        
        while(l1 || l2 || carry){
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
            
            ListNode* temp = new ListNode(count%10);
            dummy->next = temp;
            dummy = dummy->next;
            
        }
        return res->next;
        
    }
};
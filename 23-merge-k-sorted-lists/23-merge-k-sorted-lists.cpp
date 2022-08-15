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
   ListNode* merge2Lists(ListNode* l1, ListNode* l2) {
        
        //example 
        //      5 7 9
        //    3 4 8 10
        if(l1==NULL)return l2;
        else if(l2==NULL) return l1;
        
        if(l1->val > l2->val)swap(l1,l2);
        //final to ret
        ListNode* res = l1;
        
        
        while(l1!=NULL and l2!=NULL){
            //temp is used coz l1 reaches the next ptr and we have to break link in previous ptr
            ListNode* temp = NULL;
            while(l1 != NULL and l1->val <= l2->val){
                temp = l1;
                l1=l1->next;
            }
            temp->next = l2;
            swap(l1,l2);
        }
        return res;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans=NULL;
        for(auto i:lists)
        {
            ans=merge2Lists(ans,i);
        }
        return ans;
        
    }
    
};
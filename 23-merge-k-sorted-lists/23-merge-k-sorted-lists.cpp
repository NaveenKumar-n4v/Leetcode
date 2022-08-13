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
    ListNode* merge2Lists(ListNode* list1,ListNode* list2)
    {
        ListNode* list3 =new ListNode();
        ListNode* head=list3;
        ListNode* temp=list1;
        while(list1!=NULL and list2!=NULL)
        {
            if(list1->val<list2->val)
            {
                list3->next=list1;
                list1=list1->next;
            }
            else
            {
                list3->next=list2;
                list2=list2->next;
            }
            list3=list3->next;
        }
        if(list1!=NULL)
            list3->next=list1;
        else if(list2!=NULL)
            list3->next=list2;
        return head->next;
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
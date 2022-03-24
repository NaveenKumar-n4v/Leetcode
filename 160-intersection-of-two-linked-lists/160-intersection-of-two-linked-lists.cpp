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
        
      // Extreme Brute O(M*N)
        // while(h2){
        //     ListNode* res = h1;
        //     while(res){
        //         if(res == h2){
        //             return h2;
        //         }
        //         res = res->next;
        //     }
        //     h2 = h2->next;
        // }
        // return NULL;
        
        
        ListNode* dummy1=h1;
        ListNode* dummy2=h2;
        int cnt1=0;
        int cnt2=0;
        while(dummy1 != NULL){
            cnt1 +=1;
            dummy1 = dummy1->next;
        }
        while(dummy2 != NULL){
            cnt2 +=1;
            dummy2 = dummy2->next;
        }
        if(cnt1>=cnt2){
            cnt1 = abs(cnt1-cnt2);
            while(cnt1--){
                h1 = h1->next;
            }
        }
        else{
            cnt2 = abs(cnt2-cnt1);
            while(cnt2--){
                h2= h2->next;
            }
        }
        while(h1 && h2){
            if(h1==h2)return h2;
            h1 = h1->next;
            h2 = h2->next;
        }
        return NULL;
        return h1;
    }
};
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
    ListNode* swapNodes(ListNode* head, int k) {
       /* int size=1;
        ListNode* curr=head;
        
        while(curr)
        {
            size++;
            curr=curr->next;
        }
        
        ListNode* sec=head;
        curr=head;
        
        int s=size-k-1;
        k--;
        while(k--)
            curr=curr->next;
        while(s--)
            sec=sec->next;
        
        swap(curr->val,sec->val);
        return head;*/
        
        ListNode *p1=head,*p2=head,*t=NULL;
        k--;
        while(k--)
            p1=p1->next;
        
        t=p1;
        p1=p1->next;
        while(p1)
        {
            p1=p1->next;
            p2=p2->next;
        }
        
        swap(t->val,p2->val);
        return head;
        
        
        
        
        
    }
};
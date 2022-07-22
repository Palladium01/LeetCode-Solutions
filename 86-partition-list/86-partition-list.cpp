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
    ListNode* partition(ListNode* head, int x) {
        if(!head)
            return NULL;
        
        ListNode* less = new ListNode(0);
        ListNode* more = new ListNode(0);
        
        ListNode* tempL=less;
        ListNode* tempM=more;
        
        auto cur=head;
        
        while(cur)
        {
            if(cur->val<x){
                ListNode* dummy = new ListNode(cur->val);
                tempL->next=dummy;
                tempL=tempL->next;
            }
            
            else{
                ListNode* dummy = new ListNode(cur->val);
                tempM->next=dummy;
                tempM=tempM->next;
            }
            cur=cur->next;
        }
        
        tempL->next=more->next;
        
        return less->next;
    }
};
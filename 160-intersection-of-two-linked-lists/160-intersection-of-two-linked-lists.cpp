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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        auto temp=headA;
        int a=0,b=0;
        while(temp)
        {
            a++;
            temp=temp->next;
        }
        
        temp=headB;
        while(temp)
        {
            b++;
            temp=temp->next;
        }
        
        int diff=abs(a-b);
        
        if(a>b)
        {
            while(diff)
            {
                headA=headA->next;
                diff--;
            }
        }
        
        else
        {
            while(diff)
            {
                headB=headB->next;
                diff--;
            }
        }
        
        while(headA&&headB)
        {
            if(headA==headB)
                return headA;
            headA=headA->next;
            headB=headB->next;
        }
            
        
        return {};
    }
};
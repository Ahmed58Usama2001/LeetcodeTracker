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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int length=0;
        ListNode* cur=head;

        while(cur)
        {
            length++;
            cur=cur->next;
        }

        int prvNode=length-n,ctr=1;
        cur=head;

        if(n==length)
        head=head->next;

        else if(n==1)
        {   
            while(ctr!=length-1)
            {   ctr++;
                cur=cur->next;
            }
            cur->next=NULL;
        }

        else
        {   
            while(ctr!=prvNode)
            {   ctr++;
                cur=cur->next;
            }
            cur->next=cur->next->next;
        }

        return head;
    }
};
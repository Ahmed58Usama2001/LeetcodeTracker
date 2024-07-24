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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
        return head;

        ListNode* prv=head,*cur=head->next,*scnd=head->next;

        while(prv&&cur)
        {
            prv->next=cur->next;
            if(prv->next)
            prv=prv->next;
            else
            break;

            cur->next=prv->next;
            if(cur->next)
            cur=cur->next;
            else
            break;
        }

        prv->next=scnd;

        return head;
    }
};
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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
        return head;

        ListNode* swappedHead=new ListNode();
        ListNode* swappedPtr=swappedHead;

        ListNode* prv=head,*cur=head->next;

        while(prv&&cur)
        {   ListNode * item1=new ListNode(cur->val);
            swappedPtr->next=item1;
            swappedPtr=swappedPtr->next;

            ListNode * item2=new ListNode(prv->val);
            swappedPtr->next=item2;
            swappedPtr=swappedPtr->next;

            prv=cur->next;
            if(prv)
            cur=prv->next;
        }

        if(prv)
      { ListNode * item2=new ListNode(prv->val);
        swappedPtr->next=item2;
        swappedPtr=swappedPtr->next;}

        return swappedHead->next;
    }
};
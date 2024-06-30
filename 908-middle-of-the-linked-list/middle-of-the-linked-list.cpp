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
private:
    int GetLength(ListNode* head){
        int cntr=0;
        for(ListNode* cur=head;cur;cur=cur->next)
        cntr++;

        return cntr;
    }

    ListNode* GetNthNode(int n,ListNode* head)
    {
        int cntr=1;
        for(ListNode* cur=head;cur;cur=cur->next)
        {
            if(cntr==n)
            return cur;

            cntr++;
        }
        return nullptr;
    }


public:
    ListNode* middleNode(ListNode* head) {
        int length=GetLength(head);

        return GetNthNode((length/2)+1,head);
    }
};
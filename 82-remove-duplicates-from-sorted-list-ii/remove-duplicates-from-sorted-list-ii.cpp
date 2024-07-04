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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int>hash;

        ListNode* cur=head;
        ListNode* prv;
        while(cur)
        {
            hash[cur->val]++;
            cur=cur->next;
        }

        cur=head;

        while(cur)
        {   
            if(hash[cur->val]>1)
            {
                if(cur==head)
                {
                    head=head->next;
                    cur=head;
                    continue;
                }
                else
                {
                    prv->next=cur->next;
                    cur=cur->next;
                    continue;
                }

            }
            prv=cur;
            cur=cur->next;
        }

        return head;
    }
};
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        stack<int>values;
        int ctr=1;
        ListNode* cur=head;

        while(ctr<=right && cur)
        {
            if(ctr>=left&&ctr<=right)
                values.push(cur->val);
            ctr++;
            cur=cur->next;
        }

        cur=head;
        ctr=1;

        while(ctr<=right && cur)
        {
            if(ctr>=left&&ctr<=right)
                {
                    cur->val=values.top();
                    values.pop();
                }
            ctr++;
            cur=cur->next;
        }

        return head;
    }
};
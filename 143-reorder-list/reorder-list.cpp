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
    void reorderList(ListNode* head) {

        queue<int> q;
        stack<int>s;

        ListNode* cur=head;
        int length=0;
        while(cur)
        {
            length++;
            cur=cur->next;
        }
        cur=head;
        int ctr=length%2==0?0:-1;

        while(ctr!=length/2 && cur)
        {
            q.push(cur->val);
            ctr++;
            cur=cur->next;
        }

        while(ctr!=length && cur)
        {
            s.push(cur->val);
            ctr++;
            cur=cur->next;
        }

        cur=head;
        ctr=1;

        while(cur)
        {
            if(ctr%2!=0)
            {
                cur->val=q.front();
                q.pop();
            }
            else
            {
                cur->val=s.top();
                s.pop();
            }
            ctr++;
            cur=cur->next;
        }



    }
};
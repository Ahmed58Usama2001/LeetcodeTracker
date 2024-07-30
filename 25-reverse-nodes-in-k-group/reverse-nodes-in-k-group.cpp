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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* res=new ListNode(0);
        ListNode* cur=head;
        ListNode* curRes=res;

        stack<int> stk;
        int ctr=0;
        while(cur)
        {   
            ctr++;
            stk.push(cur->val);
            if(ctr==k)
            {   
                while(!stk.empty())
                {   ListNode* item=new ListNode(stk.top());
                    stk.pop();
                    curRes->next=item;
                    curRes=curRes->next;
                }
                ctr=0;
            }
            cur=cur->next;
        }

        if(!stk.empty())
        {
            stack<int> stk2;
            while(!stk.empty())
            {   stk2.push(stk.top());
                stk.pop();
            }

            while(!stk2.empty())
            {   ListNode* item=new ListNode(stk2.top());
                stk2.pop();
                curRes->next=item;
                curRes=curRes->next;
            }
        }

        return res->next;
    }
};
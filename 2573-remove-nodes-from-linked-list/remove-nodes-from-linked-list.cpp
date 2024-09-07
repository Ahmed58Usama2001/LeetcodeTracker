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
    ListNode* removeNodes(ListNode* head) {
        //use stack to remove the elements if cur>stk.top
        //use another stack to reverse
        //make a linked lis from the elements in thereversed stack
        stack<int>stk;
        stack<int>reverse_stk;

        ListNode* cur=head;

        while(cur)
        {
            while(!stk.empty() && cur->val>stk.top())
                stk.pop();
            
            stk.push(cur->val);
            cur=cur->next;
        }

        while(!stk.empty())
        {
            reverse_stk.push(stk.top());
            stk.pop();
        }

        ListNode* Result=new ListNode(0);
         cur=Result;
        

        while(!reverse_stk.empty())
        {
            ListNode* node=new ListNode(reverse_stk.top());
            cur->next=node;
            cur=cur->next;

            reverse_stk.pop();
        }

        return Result->next;
    }
};
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
        vector<int>stk;
        ListNode* cur=head;
        while(cur)
        {
            while(!stk.empty() && cur->val>stk.back())
                stk.pop_back();
            stk.push_back(cur->val);
            cur=cur->next;
        }
        ListNode* Result=new ListNode(0);
         cur=Result;
        for(int i=0;i<stk.size();i++)
        {
            ListNode* node=new ListNode(stk[i]);
            cur->next=node;
            cur=cur->next;
        }
        return Result->next;
    }
};
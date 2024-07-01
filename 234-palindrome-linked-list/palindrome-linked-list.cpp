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
    int getLength(ListNode * head)
    {
        int length=0;
        for(ListNode* cur=head;cur;cur=cur->next)
            length++;
        
        return length;
    }
public:
    bool isPalindrome(ListNode* head) {
        int length=getLength(head),cntr=0;
        ListNode * cur=head;

        stack<int> s;

        while(cntr!=length/2)
        {
            s.push(cur->val);
            cntr++;
            cur=cur->next;
        }

        if(length%2!=0)
        cur=cur->next;

        while(cur)
        {
            if(s.top()==cur->val)
            s.pop();
            else
            return false;

            cur=cur->next;
        }
return true;
    }
};
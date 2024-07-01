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
    void RemoveNext(ListNode* node)
    {
        ListNode* toBeDeleted=node->next;
        node->next=toBeDeleted->next;
        delete toBeDeleted;
    }
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur=head;
        while(cur && cur->next)
        {
            if(cur->val == cur->next->val)
            RemoveNext(cur);
            else
            cur=cur->next;
        }
        return head;
    }
};
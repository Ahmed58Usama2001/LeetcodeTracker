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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* res=new ListNode(0);
        ListNode* cur;
        multiset<int> myMultiset;

        for(int i=0;i<lists.size();i++)
        {   if(lists[i])
            cur=lists[i];
            
            while(cur)
            {
                myMultiset.insert(cur->val);
                cur=cur->next;
            }
        }

        cur=res;
        for (int num : myMultiset) {
            ListNode* item=new ListNode(num);
           cur->next=item;
           cur=cur->next;
         }

        return res->next;
    }
};
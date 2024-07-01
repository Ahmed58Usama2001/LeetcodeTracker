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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* cur1=list1;
        ListNode* cur2=list2;
        ListNode *res = new ListNode();
        ListNode *cur = res;

        while(cur1&&cur2)
        { 
            if(cur1->val<=cur2->val)
            {
              ListNode* node=new ListNode(cur1->val);
              cur->next=node;
              cur=cur->next;
              cur1=cur1->next;
            }
            else
            {
              ListNode* node=new ListNode(cur2->val);
              cur->next=node;
              cur=cur->next;
              cur2=cur2->next;
            }
        }

        
            while(cur1)
            {
              ListNode* node=new ListNode(cur1->val);
              cur->next=node;
              cur=cur->next;
              cur1=cur1->next;
            }

            while(cur2)
            {
              ListNode* node=new ListNode(cur2->val);
              cur->next=node;
              cur=cur->next;
              cur2=cur2->next;
            }

    

        res=res->next;
        return res;
    }
};
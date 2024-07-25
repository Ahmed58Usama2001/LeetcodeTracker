/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        Node* copy= new Node(0);
        Node* curCopy= copy;
        Node* cur= head;

        unordered_map<int,int>vals;
        unordered_map<int,Node*>randoms;

        int i=0;
        while(cur)
        {   
            vals[i]=cur->val;
            cur->val=i;

            cur=cur->next;
            i++;
        }


        i=0;
        cur=head;
        while(cur)
        {   Node* item=new Node(vals[cur->val]);
            randoms[i]=item;

            curCopy->next=item;

            cur=cur->next;
            curCopy=curCopy->next;
            i++;
        }

        curCopy=copy->next;
        cur=head;
        while(curCopy)
        {   
            if(cur->random)
            curCopy->random=randoms[cur->random->val];


            cur=cur->next;
            curCopy=curCopy->next;
        }

        return copy->next;
    }
};
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
        if(head==nullptr)
        {
            return nullptr;
        }
        unordered_map<Node* ,Node*> mp;
        Node*nhead=new Node(head->val);
        Node *t1=head;
        Node *t2=nhead;
        mp.insert({head,nhead});
        t1=t1->next;
        
        while(t1!=nullptr)
        {
            Node* n=new Node(t1->val);
            mp.insert({t1,n});
            t2->next=n;
            t2=t2->next;
            t1=t1->next;
        }
        t2=nhead;
        t1=head;
        while(t2!=nullptr)
        {
            t2->random=mp[t1->random];
            t2=t2->next;
            t1=t1->next;
        }
        return nhead;
        
        

        
    }
};
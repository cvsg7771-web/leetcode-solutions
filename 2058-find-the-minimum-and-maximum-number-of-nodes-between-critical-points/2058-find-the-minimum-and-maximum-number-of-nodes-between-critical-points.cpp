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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v={-1,-1};
        if(head==nullptr||head->next==nullptr||head->next->next==nullptr)
        {
            return v;
        }
        int pos=1;
        int first=-1;
        int last=-1;
        int mindist=INT_MAX;
       
        ListNode* hn=head->next;
        while(hn->next!=nullptr)
        {
            if((head->val>hn->val&&hn->val<hn->next->val)||(head->val<hn->val&&hn->val>hn->next->val))
            {
                if(first==-1)
                {
                    first=pos;
                }
                else
                {
                    mindist=min(mindist,pos-last);
                }
                last=pos;
                
            }
            pos++;
            head=hn;
            hn=hn->next;

        }
        if(first==-1;first==last)
        {
            return v;
        }

        v[0]=mindist;
        v[1]=last-first;
        return v;
        

         

        
    }
};
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
        vector<int> crit;
        ListNode* hn=head->next;
        while(hn->next!=nullptr)
        {
            if((head->val>hn->val&&hn->val<hn->next->val)||(head->val<hn->val&&hn->val>hn->next->val))
            {
                crit.push_back(pos);
            }
            pos++;
            head=hn;
            hn=hn->next;

        }
        if(crit.size()<2)
        {
            return v;
        }
         v[1]=crit[crit.size()-1]-crit[0];
        int mn=INT_MAX;
        for(int i=1;i<crit.size();i++)
        {
            mn=min(mn,crit[i]-crit[i-1]);

        }
        v[0]=mn;
        return v;

         

        
    }
};
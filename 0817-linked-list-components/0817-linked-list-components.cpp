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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int>mp(nums.begin(),nums.end());
        
        int ans=0;
        while(head!=nullptr)
        {
            if(mp.find(head->val)!=mp.end())
            {
                if(head->next==nullptr||mp.find(head->next->val)==mp.end())
                {
                    ans++;
                }


            }
            head=head->next;
        }
        return ans;
    }
};
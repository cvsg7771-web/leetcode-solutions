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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* t1 = head;
        ListNode* t2 = head;
        ListNode* t3 = head;
        while (t3!= nullptr) {
            ListNode *next = t3->next;
           
            if (t3->val < t2->val) {
                if (t3->val < head->val) {
                    ListNode* t4 = t3->next;
                    t3->next = head;
                    head = t3;
                    t2->next = t4;
                    t3 = t4;

                } else {
                     t1 = head;
                    while (t1->next!=t3&&t1->next->val < t3->val) {
                        t1 = t1->next;
                    }
                    ListNode* t4 = t3->next;
                    t3->next=t1->next;

                    t1->next = t3;
                    t2->next = t4;
                    t3 = t4;
                }
               
            }
            else
            {
                t2=t3;
            }
            t3=next;
        
            
            
        }
        return head;
    }
};